//To insert data in a linked list in a sorted way

# include<stdio.h>
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
   
   
   void insertsorted(struct node* head)
   {
   	struct node* current=(struct node*)malloc(sizeof(struct node));
   	struct node* prev;
   	if(current==NULL)
   	{
   		printf("overflow");
   		return;
	   }
	printf("input new node");
	scanf("%d",&current->key);
	struct node* next=head;
	while(next->key<current->key)
	{
		prev=next;
		next=next->link;
		
		
	}
	prev->link=current;
	current->link=next;
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
   	
   	push(&head,24);
   	push(&head,23);
   	push(&head,21);
   	push(&head,20);
   	insertsorted(head);
   	print(head);
   	
   	return 0;
   }


