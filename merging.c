# include<stdio.h>
# include<stdlib.h>

struct node
{
	int data;
	struct node*  link;
};


void merging(struct node* head1,struct node* head2)
{
	
	struct node* head;
	
	struct node* current1=head1;
	struct node* current2=head2;
	struct node* current=head;
	if(current1->data<current2->data)
	{
		current->data=current1->data;
		current1=current1->link;
	}
	else
	{
		current->data=current2->data;
		current2=current2->link;
	}
	while(current!=NULL && current2!=NULL)
	{
		struct node* next=(struct node*)malloc(sizeof(struct node));
		if(current1->data<current2->data)
		{
			next->data=current1->data;
			current1=current1->link;
		}
		else
		{
			next->data=current2->data;
		current2=current2->link;
			
		}

		current->link=next;
		current=next;
		
	}
	
	while(current1!=NULL)
	{
		struct node* next=(struct node*)malloc(sizeof(struct node));
		next->data=current1->data;
		current1=current1->link;
		current->link=next;
		current=next;
		
	}
	while(current2!=NULL)
	{
		struct node* next=(struct node*)malloc(sizeof(struct node));
		next->data=current2->data;
		current2=current2->link;
		current->link=next;
		current=next;
		
		
	}
	current->link=NULL;
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



