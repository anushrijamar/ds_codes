#include<stdio.h>
#include<stdlib.h>
typedef struct sll
{
    int data;
    struct sll *next;
}*s;
s head=NULL,temp,current,top;
s getnode()
{
    s newnode;
     newnode=malloc(sizeof(struct sll));
    newnode->next=NULL;
    return newnode;
}
void push(int ele)
{
    s new;
    new=getnode();
    new->data=ele;
    if(head==NULL)
    {
        head=new;
        top=new;
    }
    else
    {
        new->next=top;
        top=new;
    }
}
void display()
{
    printf("The stack:\n");
    current=top;
    while(current!=NULL)
    {
        printf("%d\t",current->data);
        printf("\n");
        current=current->next;
    }
    printf("NULL");
}
void pop()
{
    if(top==NULL)
    {
        printf("stack is empty\n");
    }
    else
    {
        temp=top;
        top=top->next;
        free(temp);
    }
}
int main()
{
    int n,i,choice,ele;
    char ans='y';
    //  printf("Enter the number of elemets\t");
    // scanf("%d",&n);
    // for(i=0;i<n-1;i++){
    // push();}
    push(1);
    push(2);
    push(3);
    push(4);
   
       while(ans=='y')
    {
         printf("Enter the choice\n1.push\n2.pop\n3.display\t");
    scanf(" %d",&choice);
        switch(choice)
        {
            case 1:
               printf("Enter data:\t");
              scanf(" %d",&ele);
            push(ele);
            break;
            case 2:
            pop();
            break;
            case 3:
            display();
            break;
        }
        
        printf("\ndo you want to continue\t");
        scanf(" %c",&ans);
    }
    // display();
}