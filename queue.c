#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
     struct node *next;
};
struct node *rear=NULL;
    struct node *front=NULL;
    struct node *head;
void push()
{
    struct node *newnode=(malloc(sizeof(struct node)));
    printf("enter the data\t");
    scanf("%d",&newnode->data);
    if(rear==NULL)
    {
        newnode->next=NULL;
        rear=newnode;
        head=newnode;
    }
    else{
        rear->next=newnode;
        rear=newnode;
    }
    if(front==NULL)
    {
        front=head;
    }
}
void display()
{
    while(front!=rear->next)
    {
        printf("%d\t",front->data);
        front=front->next;
    }
}
int main()
{
    push();
    push();
    push();
    push();
    display();
}