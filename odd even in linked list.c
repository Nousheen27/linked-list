#define NULL  0
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
void create(int n )
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
void displayeven(NODE *p)
{
	while(p!=NULL)
	{
		if((p->data)%2!=0)
		    printf("%d\t",p->data);
		p=p->next;    
	}
}
void displayodd(NODE *p)
{
	while (p!=NULL)
	{
		if((p->data)%2!=0)
		    printf("%d\t",p->data);
		p=p->next;    
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
void main()
{
	int ch,n;
	
	 while(1)
	 {
	 	system("cls");
	 	printf("\n 1: create");
	 	printf("\n 2: display");
	 	printf("\n 3: display Even Numbers");
	 	printf("\n 4: display Odd Numbers");
	 	printf("\n 5: exit()");
	 	printf("\n 6: Enter your choice");
	 	scanf("%d",&ch);
	 	switch(ch)
	 	{
	 		case 1: printf("\n Enter an Element: ");
	 		        scanf("%d",&n);
	 		        create(n);
	 		        break;
	 		case 2:display(root);
			       break;
			case 3:displayeven(root);
			       break;
		    case 4:displayodd(root);
			       break;
			case 5:exit(0);	           
		 }
		 getch();
	 }
}
