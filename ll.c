#include<stdio.h>
#include<stdlib.h>
struct node
{
	 int data;
	 struct node *next;
	 };
struct node *head=NULL, *start=NULL;
void create(int ele)
{
	struct node *newNode =(struct node*)
	malloc(sizeof (struct node*));
	newNode->data=ele;
	newNode->next=NULL;
	if(head==NULL)
	{
		head=newNode;
		start=newNode;
	}
	else
	{
		start->next=newNode;
		start=newNode;
	}
}
void display()
{
	struct node *current = head;
	if (head==NULL)
	{
		printf("\nList is not created");
        return ;	
	}
	while(current!=NULL)
	{
		printf("\t%d",current->data);
		current=current->next;
	}
	
}
void insert(int pos,int ele)
{
	struct node *newNode=(struct node*)
	malloc(sizeof (struct node*));
	//int q,*current;
	struct node *q=(struct node*)
	malloc(sizeof (struct node*));
	struct node *current=(struct node*)
	malloc(sizeof (struct node*));
	newNode->data=ele;
	newNode->next=NULL;
	if(pos==1)
	{
		newNode->next=q;
		q=newNode;
	}
	else
	{
		current=q;
		for(int i=1;i<=pos-2;i++)
		{
			current=current->next;
		}
		newNode->next=current->next;
		current->next=newNode;
			}
 } 
int main(void)
{
	 int result;
	create(25);
	create(35);
	create(45);
	create(55);
	display();
	insert(3,50);
    result=sum();
    printf("\nThe addition of all elements in linked list is %d",result);
}
int sum()
{
 struct node *q;
 int add=0;
 q=start;
 while(q!=NULL)
 {
    add=add+(q->data);
    q=q->next;
 }
 return add;
}