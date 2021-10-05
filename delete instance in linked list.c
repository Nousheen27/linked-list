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
void display(NODE *p)
{
	while(p!=NULL)
	{
		printf("%d\t",p->data);
		p=p->next;
	}
}
void deleteinstance(NODE *p)
{
	int n;
	NODE *q, *r;
	printf("\n Enter Element to be deleted: ");
	scanf("%d",&n);
	q=p;
 while(p->data==n)
 {
 	p=p->next;
 }
  while(q->next!=NULL)
  {
  	if(q->next->data==n)
  	 q->next=q->next->next;
  	else
  	q=q->next;
  }
  printf("\n Deleted");
}
void main()
{
	 int ch,n,i,k;
	  
	  while(1)
	  {
	  	system("cls");
	  	printf("\n 1: create");
	  	printf("\n 2: display");
	  	printf("\n 3: deleteinstance");
	  	printf("\n 4:exit()");
	  	printf("Enter your Choice: ");
	  	scanf("%d",&ch);
	  	switch(ch)
	  	{
	  		case 1: printf("\n Enter Number of Nodes: ");
	  		scanf("%d",&k);
	  		for(i=1;i<=k;i++)
	  		 {
	  		 	printf("\n Enter data for Node[%d]: ");
	  		 	scanf("%d",&n);
	  		 	create(n);
			   }
			   break;
			case 2: display(root);
			        break;
			case 3: deleteinstance(root);
			         break;
			cse 4:  exit(0);
		  }
		  getch();
	  }
}
