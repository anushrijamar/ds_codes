#include<stdio.h>
#include<stdlib.h>
#define max 3 //macro defination
#define size 19

typedef struct skip
{
    int data;
    struct skip *next[max];
}*skl;
 skl head=NULL,temp,new1,current;
skl getnode()
{
   skl new1;
    new1=malloc(sizeof(struct skip));
    for(int i=0;i<max;i++)
    {
        new1->next[i]=NULL;
    }
    return new1;
}
struct skip create()
{
   skl  newnode;
   int a[20];
   for(int i=1;i<=15;i++)
   {
          a[i]=i;
   }
    int i;
    // for(i=1;i<size;i++)
    // {
    //     printf("%d\t",a[i]);
    // }
    //  size_t n=size(a)/sizeof(a[0]);
    for(int i=1;i<=size;i++){
    if(head==NULL)
    {
       // 
       head=getnode();;
        head->data=a[i];
       // printf("%d\t",head->data);
        temp=head;
    }
    else
    {
         newnode=getnode();
        newnode->data=a[i];
        // printf("%d\t",newnode->data);
        temp->next[0]=newnode;
        temp=newnode;
    }}
}
skl display()
{
    current=head;
    printf("Normal lane\t");
    while(current!=NULL)
    {
        printf("%d\t",current->data);
        current=current->next[0];
    }
}
skl d_of_ex()
{
    int i,m;
    m=max;
    for(i=1;i<m;i++)
    {
        printf("Express lane %d\n:",i);
        current=head;
        temp=head;
        while(temp)
        {
            printf("%d->\t",temp->data);
            temp=temp->next[i];
        }
    }
}
void express()
{
    int m;
    m=max;
    for(int i=1;i<m;i++)
    {
        skl prev=head;
        temp=head;
        int c=1;
        while(temp->next[i-1]!=NULL)
        {
            if(c%max==0)
            {
                // printf("%d is count\t",c);
                prev->next[i]=temp;
                prev=temp;
                // printf("%d\t",prev->data);
            }
            temp=temp->next[i-1];
            c++;
        }
    }
}
void search(int ele)
{
    int l=max-1,count=1;
    skl prev=head,c=head;
    temp=head->next[l];
        //    while(c->next[0]!=NULL)
        // {
        //     c=c->next[0];
        // }
        // printf("%d data",c->data);
        if(ele<head->data ) 
        {
            printf("not exits\t");
            // break;
        }
     else if(ele==head->data)
     {
        printf("found at head\t");
        // break;
     }
       else
     {
      while(l>=0)
    {
        temp=prev->next;
        while(temp!=NULL)
        {
            if(temp->data<=ele)
            {
                printf("%d comapre\t",temp->data);
                 count++;
                if(temp->next[l]->data==ele)
                {
                   
                    printf("%d\telemnts found",count);
                }
            }
            else{
                printf("%d comapre\t",temp->data);
                break;
            }
            temp=temp->next[l];
            prev=prev->next[l];
            
        }
     }
      l--;  
    }
}
int main()
{
    int s;
    create();
    display();
    express();
    d_of_ex();
    printf("Enterr ele");
    scanf("%d",&s);
    search(s);
}