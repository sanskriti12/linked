//find nth element in a linked list..
# include<stdio.h>
# include<conio.h>
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

int get(struct node* head,int index)

{
	struct node* current=head;
	int count=1;
	
	while(current!=NULL)
	{
		if(count==index)
		{
		
		return current->data;
	    }
	     
		current=current->next;
		count++;
	}
	
}


int main()
{  
	struct node* head=NULL;
	push(&head,20);
	push(&head,30);
	push(&head,10);
	push(&head,40);
	printf("element at index 1 is %d",get(head,1));
}

