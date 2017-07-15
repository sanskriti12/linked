# include<stdio.h>
# include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
 void push(struct node** head,int newdata)//insertion at beginning
	{
		struct node* newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=newdata;
		newnode->next=*head;
		*head=newnode;
	 } 
	 
	 void insertAfter(struct node* prevnode,int newdata)//insertion after a given node
	 {
	 	if(prevnode==NULL)
	 	{
	 		printf("prev node can't be null");
	 		return;
		 }
		 struct node* newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=newdata;
		newnode->next=prevnode->next;
		prevnode->next=newnode;
	 }
	 
	 
	 void append(struct node** head,int newdata)//insertion at the end of node
	{
		struct node* newnode=(struct node*)malloc(sizeof(struct node));
		struct node* last=*head;
		newnode->data=newdata;
		newnode->next=NULL;
		if(*head==NULL)
		{
			*head=newnode;
			return;
		}
		while(last->next!=NULL)
		last=last->next;
		last->next=newnode;
		return;
	 } 
	 void printList(struct node* n)
{
	while(n!=NULL)
	{
	
	printf("%d",n->data);
	n=n->next;
    }
}
    
    
     int main()
	 {
	 	struct node* head=NULL;
	 	append(&head,6);
	 	push(&head,7);
	 	push(&head,1);
	 	append(&head,4);
	 	insertAfter(head->next,8);
	 	printf("given linked list is");
	 	printList(head);
	 	
	 	
	 }
