#include<stdio.h>
#include<stdlib.h>
typedef struct hash
{
    int data;
    struct hash *next;
}*hh;
hh a[10],new2,temp;
void getar()
{
    int i;
    for(i=0;i<10;i++)
    a[i]=NULL;
    // return a;
}
hh getnode()
{
    new2=malloc(sizeof(struct hash));
    new2->next=NULL;
    return new2;
}
void insert(int ele,int rem)
{
int flag=0;
    if(a[rem]==NULL)
    {
        a[rem]=getnode();
        a[rem]->data=ele;
    }else{
        temp=a[rem];
    while(flag!=1)
{
if(temp->next==NULL)
{
    new2=getnode();
    new2->data=ele;
    temp->next=new2;
    flag=1;
}
temp=temp->next;
}}
}
void display()
{
    for(int i=0;i<10;i++)
    {
        temp=a[i];
        while(temp)
        {
            printf("%d->",temp->data);
            temp=temp->next;
        }
        printf("NULL\n");
    }
}
int main()
{
    char res='y';
    getar();
    int ele,rem;
    while(res=='y')
    {
        printf("Enter value\t");
        scanf("%d",&ele);
        rem=ele%10;
        insert(ele,rem);
        printf("\ndo want\t");
        scanf(" %c",&res);
    }
    display();
}