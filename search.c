//search an element in a linked list

# include<stdio.h>
# include<conio.h>
struct node
{
	int key;
	struct node* next;
};
   void push(struct node** head,int newkey)
   {
   	struct node* newnode=(struct node*)malloc(sizeof(struct node));
   	newnode->key=newkey;
   	newnode->next=*head;
   	*head=newnode;
   }
   
   search(struct node* head,int x)
   {
   	struct node* current=head;
   	while(current!=NULL)
   	{
   		if(current->key==x)
   		return 1;
   		current=current->next;
	   }
	   return 0;
   }
   int main()
   {
   	struct node* head=NULL;
   	int x=21;
   	push(&head,13);
   	push(&head,45);
   	push(&head,56);
   	push(&head,21);
   	search(head,88)?printf("yes"):printf("no");
   	return 0;
   }

