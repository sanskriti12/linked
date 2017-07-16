# include<stdio.h>
# include<stdlib.h>

struct node
{
	int data;
	struct node*  link;
};


struct node* merging(struct node* head1,struct node* head2)
{
	
	struct node* head;
	
	struct node* current1=head1;
	struct node* current2=head2;

	if(current1->data<current2->data)
	{
		head=current1->data;
		current1=current1->link;
	}
	else
	{
		head=current2->data;
		current2=current2->link;
	}
	struct node* current=head;
	while(current1!=NULL && current2!=NULL)
	{
		
		if(current1->data<current2->data)
		{
			current->link=current1->link;
			current=current->link;
			current1=current1->link;
		}
		else
		{
                 current->link=current1->link;
			current=current->link;
		
		current2=current2->link;
			
		}

		
	}
	
	while(current1!=NULL)
	{
		current->link=current1;
    current=current->link;
	current1=current1->link;	
		
		
	}
	while(current2!=NULL)
	{
		current->link=current2;
    current=current->link;
	current2=current2->link;	
		
		
	}
	return head;
}
void push(struct node** head,int newdata)
   {
   	struct node* newnode=(struct node*)malloc(sizeof(struct node));
   	newnode->data=newdata;
   	newnode->link=*head;
   	*head=newnode;
   }
   
   
    void print(struct node* head)
	 {
	 	struct node* temp=head;
	 	while(temp!=NULL)
	 	{
	 		printf("%d",temp->data);
			 temp=temp->link;
		 }
	 }
	 
	
   int main()
   {
   	struct node* head=NULL;
   	struct node* head1=NULL;
   	struct node* head2=NULL;

   	push(&head1,5);
   	push(&head1,2);
   	push(&head1,1);
   	
   	
   	
   		
   	push(&head2,8);
   	push(&head2,4);
   	push(&head2,3);
   	
   	
   	merging(head1,head2);
   	print(head);
   	return 0;
   }



