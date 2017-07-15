
//sorting of linked lists

# include<stdio.h>
# include<stdlib.h>
# include<conio.h>
struct node
{
	int key;
	struct node* link;
};

   void push(struct node** head,int newkey)
   {
   	struct node* newnode=(struct node*)malloc(sizeof(struct node));
   	newnode->key=newkey;
   	newnode->link=*head;
   	*head=newnode;
   }
   
   
     sorting(struct node* head)
   {
   	int temp;
   	struct node* current=head;
   	struct node* next=(struct node*)malloc(sizeof(struct node));
   	while(current->link!=NULL)
   	{
   		next=current->link;
   		while(next!=NULL)
   		{
   			if(current->key>next->key)
   			{
   				temp=current->key;
   				current->key=next->key;
   				next->key=temp;
			}
			
			next=next->link;
		}
		
	current=current->link;
		   
   	
	   }
	
   }
   
   
   void print(struct node* head)
	 {
	 	struct node* temp=head;
	 	while(temp!=NULL)
	 	{
	 		printf("%d",temp->key);
			 temp=temp->link;
		 }
	 }
	 
   int main()
   {
   	struct node* head=NULL;

   	push(&head,1);
   	push(&head,4);
   	push(&head,5);
   	push(&head,2);
   	sorting(head);
   	print(head);
   }


