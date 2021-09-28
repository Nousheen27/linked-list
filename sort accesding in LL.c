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
	NODE *root=NULL,*first=NULL;
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
	void sortascending(NODE *p)
	{
		NODE *q, *temp;
		while(p!=NULL)
		{
			q=p->next;
			 while(q!=NULL)
			 {
			 	if(p->data > q->data)
			 	{
			 		temp->data=p->data;
			 		p->data=q->data;
			 		q->data=temp->data;
				 }
				 p=p->next;
			 }
			 printf("Linked List Sorted in Ascending Order");
		}
	}
	void main()
	{
		int ch,n;
		  while(1)
		  {
		  	system("cls");
		  	printf("\n 1:create");
		  	printf("\n 2: display");
		  	printf("\n 3: Sort Ascending");
		  	printf("\n 4: exit()");
		  	printf("\n Enter Ur Choice");
		  	scanf("%d",&ch);
		  	switch(ch)
		  	{
		  		case 1: printf("\n Enter an Element: ");
		  		        scanf("%d",&n);
		  		        create(n);
		  		        break;
		  		case 2: display(root);
		  		        break;
		  	    case 3: sortascending(root);
		  	            break;
		  	    case 4: exit(0);
			  }
			  getch();
		  	
		  }
	}
