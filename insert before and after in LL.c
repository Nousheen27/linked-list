#define NULL 0
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}NODE;
 
 NODE *root=NULL, *first=NULL;
 
 void create(int n)
 {
 	NODE *p;
 	p=(NODE *)malloc(sizeof(NODE));
 	p->data=n;
 	p->next=NULL;
 	if(root==NULL)
 	   root=p;
 	else
 	{
 		first=root;
 		while(first->next!=NULL)
 		      first=first->next;
 	    first->next=p;
	 }
		 }
	 void display (NODE *p)
	 {
	 	while(p!=NULL)
	 	{
	 		printf("%d\t",p->data);
	 		p=p->next;
		 }
	 }
	 void insertafter (NODE *p)
	 {
	 	NODE *q, *r;
	 	int n,el;
		printf("\n Enter an element: ");
		scanf("%d",&el);
		r=(NODE *)malloc(sizeof(NODE));
		r->data=el;
		r->next=NULL;
		
		printf("\n Enter after which element: ");
		scanf("%d:",&n);
		
		while(p!=NULL)
		{
			if(p->data==n)
			   break;
			else
			p=p->next;
		}
		q=p->next;
		
		p->next=r;
		r->next=q;
		printf("\n Inserted");
		
		
		 }
void insertbefore(NODE *p)
{
	NODE *q, *r, *s;
	int n,el;
	printf("\n Enter an element: ");
	scanf("%d",&el);
	r=(NODE *)malloc(sizeof(NODE));
	r->data=el;
	r->next=NULL;
	
	printf("\n Enter before which element: ");
	scanf("%d:",&n);
	while(p!=NULL)
	{
		q=p;
		if(p->next->data==n)
		   break;
		else
		p=p->next;
	}
	s=p->next;
	q->next=r;
	r->next=s;
  printf("\n Inserted");
}
void main()
{
	int ch,n,i,k;
	 while(1)
	 {
	 	system("cls");
	 	printf("\n 1: create");
	 	printf("\n 2: display");
	 	printf("\n 3: insertafter");
	 	printf("\n 4: insertbefore");
	 	printf("\n 5 exit(0)");
	 	printf("Enter Your Choice:");
	 	scanf("%d",&ch);
	 	switch(ch)
	 	{
	 		case 1: printf("\n Enter number of nodes: ");
	 		scanf("%d",&k);
	 		for(i=1;i<=k;i++)
	 		{
	 			printf("\n Enter data for Node[%d]: ",i);
	 			scanf("%d",&n);
	 			create(n);
			 }
			 break;
			 case 2: display(root);
			         break;
		     case 3: insertafter(root);
		             break;
		     case 4: insertbefore(root);
		             break;
		     case 5: exit(0);
		     
		 }
		 getch();
	 }
}

 
