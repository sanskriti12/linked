//Simple code to insert numbers in a linked list


# include<stdio.h>
# include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
  struct node* head;
  void insert(int data,int n);
  void print();
  int main()
  {
  	head=NULL;
  	insert(2,1);
  	insert(3,2);
  	insert(4,1);
  	insert(5,2);
  	print();
  }
  void insert(int data,int n)
  {
  	struct node* temp1=(struct node*)malloc(sizeof (struct node*));
  	temp1->data=data;
  	temp1->next=NULL;
  	if(n==1)
  	{
  		temp1->next=head;
  		head=temp1;
  		return;
	  }
	   struct node* temp2=head;
	    int i;
	    for(i=0;i<n-2;i++)
	    {
	    	temp2=temp2->next;
	    	temp2->next=temp2;
		}
		   temp1->next=temp2->next;
		   temp2->next=temp1;
		   
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

