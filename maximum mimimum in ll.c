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
	void minmax(NODE *p)
	{
		int min=9999,max=0;
		while(p!=NULL)
		{
			if(min>p->data)
			min=p->data;
			if(max<p->data)
			max=p->data;
			p=p->next;
		}
	printf("\n Maximum value =%d",max);
	printf("\n Minimum value =%d,min");
		
}
void main()
{
	int ch,n;
	
    	while(1)
	{
		system("cls");
		printf("\n 1: create ");
		printf("\n 2: display ");
		printf("\n 3: display Minmum and Maximun");
		printf("\n 4: exit()");
		printf("\n Enter ur choice: ");
		scanf("%d,&ch");
		switch (ch)
		{
			case1: printf("\n Enter an Element: ");
			      scanf("%d",&n);
			      create(n);
		        	break;
			case2: display(root);
			       break;
			case3: minmax(root);
			       break;
			case4: exit(0);      
		}
		getch();
        }
		    
}
