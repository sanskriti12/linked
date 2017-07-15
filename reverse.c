# include<stdio.h>
# include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
static void reverse(struct node** head)
{
	struct node* prev=NULL;
	struct node* current=*head;
	struct node* next;
	while(current!=NULL)
	{
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	
	}
	*head=prev;
	
}
    void push(struct node** head,int newdata)
	{
		struct node* newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=newdata;
		newnode->next=*head;
		*head=newnode;
	 } 
	 
	 
	 void print(struct node* head)
	 {
	 	struct node* temp=head;
	 	while(temp!=NULL)
	 	{
	 		printf("%d",temp->data);
			 temp=temp->next;
		 }
	 }
	 
	 int main()
	 {
	 	struct node* head=NULL;
	 	push(&head,2);
	 	push(&head,3);
	 	push(&head,1);
	 	push(&head,5);
	 	printf("given linked list is");
	 	print(head);
	 	
	 	printf("reversed linked list is");
	 	reverse(&head);
	 	print(head);
	 }

