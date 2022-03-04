#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
	struct node *next;
	int data;
	struct node *prev;
};
struct node *start=NULL;
struct node *create_ll(struct node *);
struct node *display(struct node *);
struct node *insert_beg(struct node *,int);
struct node *insert_end(struct node *,int);
struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);
int main()
{
	int option,val;
		printf("\n\n***MAIN MENU***");
		printf("\n1.create a list");
		printf("\n2.display the list");
		printf("\n3.add a node at the beginning");
		printf("\n4.add a node at the end");
		printf("\n5.delete a node from the beginning");
		printf("\n6.delete element at end");
		printf("\n7.exit");
		do
		{
		printf("\n enter your option:")	;
		scanf("%d",&option);
		switch(option)
		{
			case 1:
			start=create_ll(start);
			printf("\n LINKED LIST IS CREATED");
			break;
			case 2:
				printf("\n the elements of linked list are:");
			start=display(start);
			break;
			case 3:
				printf("\nenter the value which is inserted at begining:");
				scanf("%d",&val);
			start=insert_beg(start,val);
			printf("\n  %d  inserted",val);
			break;
			case 4:
				printf("\nenter the value which is inserted at end:");
				scanf("%d",&val);
			start=insert_end(start,val);
			printf("\n %d inserted",val);
			break;
			case 5:
			start=delete_beg(start);
			printf("\n%d deleted",val);
			break;
			case 6:start=delete_end(start);
			printf("\n%d deleted",val);
			break;
		}
		}while(option!=7);
	getch();
	return 0;
}
	struct node *create_ll(struct node *start)
{
	struct node *new_node,*ptr;
	int num;
	printf("\nenter -1 to end");
	printf("\n enter the data");
	scanf("%d",&num);
	while(num!=-1)
	{
		new_node=(struct node *)malloc(sizeof(struct node));
		new_node->data=num;
		if(start==NULL)
		{
			new_node->prev=NULL;
			new_node->next=NULL;
			start=new_node;
		}
		else
		{
			ptr=start;
			while(ptr->next!=NULL)
			ptr=ptr->next;
			ptr->next=new_node;
			new_node->prev=ptr;
			new_node->next=NULL;
			
		}
		printf("\n enter the data:");
		scanf("%d",&num);
		
	}
	return start;
	
}	
struct node *display(struct node* start)
{
	struct node *ptr;
	ptr=start;
	while(ptr!=NULL)
	{
		printf("\t %d ",ptr->data);
		ptr=ptr->next;
	}
	return start;
}
struct node *insert_beg(struct node* start,int val)
{
	struct node* new_node;
	int num;
	new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=val;
	start->prev=new_node;
	new_node->next=start;
	start=new_node;
	return start;
}
struct node *insert_end(struct node* start,int val)
{
	struct node *ptr,*new_node;
	new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=val;
	new_node->next=NULL;
	ptr=start;
	while(ptr->next!=NULL)
	ptr=ptr->next;
	ptr->next=new_node;
	return start;
}
struct node*delete_beg(struct node *start)
{
	struct node *ptr;
	int val;
	ptr=start;
	start=start->next;
	val=ptr->data;
	free(ptr);
	return start;
	
}
struct node* delete_end(struct node *start)
{
	struct node *ptr,*preptr;
	int val;
	ptr=start;
	while(ptr->next!=NULL)
	{
		preptr=ptr;
		ptr=ptr->next;
	}
	preptr->next=NULL;
	val=ptr->data;
	free(ptr);
	return start;
}
	

