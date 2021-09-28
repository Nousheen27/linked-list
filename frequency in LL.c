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
	p=(NODE*)malloc(sizeof(NODE));
	p->data=n;
	p->next=NULL;
	if(root==NULL)
	   root=p;
	else
	{
		first=root;
		while(first->next!=NULL)
		    first=first->next=p;
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
void frequency(NODE *p)
{
	int n,f=0;
	printf("\n Enter Element whose frequency is to be calculated:  ");
	scanf("%d",&n);
	while(p!=NULL)
	{
		if(n==p->data)
		f++;
	p=p->next;
	}
printf("\n Frequency of %d is %d",n,f);
}
void main()
{
	int ch,n;
	 while(1)
	 {
	 	system("cls");
	 	printf("\n 1: create");
	 	printf("\n 2: display");
	 	printf("\n 3: Frequency of element");
	 	printf("\n 4: exit()");
	 	printf("\n 5: Enter Ur choice: ");
	 	scanf("%d",&ch);
	 	switch(ch)
	 	{
	 		case 1: printf("\n Enter an Element: ");
	 		        scanf("%d",&n);
	 		        create(n);
	 		        break;
	 		case 2: display(root);
	 		         break;
	 	    case 3: frequency(root);
	 	            break;
	 	    case 4: exit(0);
		 }
		 getch();
	 }
}
