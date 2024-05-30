#include<stdio.h>
#include<stdlib.h>
typedef struct sll
{
    int data;
    struct sll *next;
}*s;
s current,rear=NULL,front=NULL,temp;
s getnode()
{
    s newnode;
     newnode=malloc(sizeof(struct sll));
    newnode->next=NULL;
    return newnode;
}
void en(int ele)
{
    s n;
    n=getnode();
   
    if(front==NULL)
    {
         front=getnode();
        front->data=ele;
        rear=front;
    }
    else
    {
        // rear=getnode()
        n->data=ele;
        rear->next=n;
        rear=n;
    }
}
void r()
{
    if(front==NULL)
    {
        printf("queue is empty\t");
    }
    else
    {
        temp=front;
        front=front->next;
        free(temp);
    }
}
void display()
{
    current=front;
    while(current!=NULL)
    {
        printf("%d\t",current->data);
        current=current->next;
    }
    // printf("NULL");
}
int main()
{
    int n;
    en(5);
    en(10);
    en(15);
    en(20);
    printf(" n for remove");
    scanf("%d",&n);
    while(n--){
        r();
    }
    display();
}