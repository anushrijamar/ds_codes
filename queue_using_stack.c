#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top,*temp;
void push()
{
    struct node *newnode=(malloc(sizeof(struct node)));
    printf("Enterr the element\t");
    scanf("%d",&newnode->data);
    newnode=top;
    t++;
}
void display()
{
    while(top!=0)
    {
        printf("%d\t",top->data);
        top--;
    }
}
int main()
{
    push();
    push();
    display();
}