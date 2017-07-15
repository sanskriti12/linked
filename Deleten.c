//delete a node at a particular position in a linked list

# include<stdio.h>
# include<stdlib.h>
struct node
{
	int data;
	struct node* next;
	
};
struct node* head;
void insert(int data);
void print();
void delete(int n);
	int main()
	{
		head=NULL;
		insert(2);
		insert(4);
		insert(5);
		insert(6);
		print();
		int n;
		printf("enter the position");
		scanf("%d",&n);
		delete(n);
		print();
		
	}
	void delete(int n)
	{
		struct node* temp1=head;
		if(n==1)
		{
			head=temp1->next;
			free(temp1);
			return;
		}
		int i;
		for(i=0;i<n-2;i++)
		{
			temp1=temp1->next;
			
		}
		struct node* temp2=temp1->next;
		temp1->next=temp2->next;
		free(temp2);
		
	}
	   void insert(int x)
   {
   	 struct node* temp=(struct node*) malloc (sizeof(struct node));
   	 temp->data=x;
   	 
   	 
   	 
   	 temp->next=head;
   	 head=temp;
   }
   void print()
    {
    	struct node* temp=head;
    	while(temp!=NULL)
    	{
    		printf("%d",temp->data);
    		temp=temp->next;
    		
		}
		printf("\n");
	} 

