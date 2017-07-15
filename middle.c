//find middle element in a linked list..


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
    return count/2;
}


int main()
{  
	struct node* head=NULL;
	push(&head,20);
	push(&head,30);
	push(&head,10);
	push(&head,40);
	printf("middle node is %d",count(head));
}

