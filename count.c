//count no.of nodes or find length of a linked list..

# include<stdio.h>
# include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
  void push(struct node** head,int newdata)
  {
  
  struct node* newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data=newdata;
  newnode->next=*head;
  *head=newnode;
}
   int count(struct node* head)
   {
   	int count=0;
   	struct node* current=head;
   	while(current!=NULL)
   	{
   		count++;
   		current=current->next;
	   }
	   return count;
	   
   }
    
     int main()
     {
     	struct node* head=NULL;
     	push(&head,1);
     	push(&head,3);
     	push(&head,5);
     	push(&head,7);
     	printf("no.of nodes is %d",count(head));
		 return 0 ;	 }

