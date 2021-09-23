#include<stdio.h>
#include<malloc.h>
 void create();
 void view();
 void insert();
 void Delete();
 struct node 
 {
 	int data;
 	struct node *next;
 };
    struct node *head= NULL, *tail= NULL;
       int main()
       
   {
       	char c;
       	 printf("enter 1 for create 2 for view 3 for insert 4 for delete:"); //asking for ur choices
       	 scanf("%c",&c);
       	     switch(c)
       {
       	case '1':
       		create(); //calling create function
       		break;
       	case '2':
		    view();  //calling view function
		   	break;
		case '3':
			insert();  //calling insert function
			break;
		case '4':
		     Delete();  //calling delete function 
		     break;
		    
		   default:
		     printf("u have entered wrong choice :");
		}
		return 0;
	 }
	     //code for create function
	void create()
	{
		int a,i;
		struct node *temp;
		printf("enter the no of nodes in a list:");
		scanf("%d", &a );
		for(i=0;i<a;i++)
		{
			temp=(struct node*) malloc(sizeof(struct node));
			printf("enter the data to be inserted :");
			scanf("%d",temp->next);
			temp->next=NULL;
		if  (head==NULL)
			{
				head=temp;
				tail=temp;
			}
		else
		{
			tail->next=temp;
			tail= temp;
		}
	i=i+1;	
		}
	 } 
	    //code for view function
	void view()
	{
		struct node *trav;
		create();
		trav=head;
		while(trav != NULL)
		 {
		 	printf("%d", trav->data);
			 trav=trav -> next;
		 }
	}
	   //code for insert function
		void insert()
	{
		struct node*newNode;
			create();
		newNode=(struct node*) malloc(sizeof(struct node));
		newNode-> data=4;
		newNode-> next=NULL;
		
		struct node *temp,*head;
		while(temp-> next!= NULL)
		{
		temp=temp->next;
	    }
		temp->next=newNode;
   }
		   //code for delete function
	    void Delete()
	{
	struct node *trav,*prev;
	create();
     int item;
	 printf("enter node to be deleted:");
	 scanf("%d",&item);

	 		 if(head->data==item)
	 		 {
	 		 	trav=head;
	 		 	head=head->next;
	 		 	free(trav);	
			 }
			else
			{
				trav=head;
				while(trav->data!=item)
				{
					prev=trav;
					trav=trav->next;
				}
			prev->next=trav->next;
			if(trav==tail)	
			
			tail=prev;
			free(trav);
			 } 
		}
