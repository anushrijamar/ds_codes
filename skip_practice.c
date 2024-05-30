#include<stdio.h>
#include<stdlib.h>
#define size 19
#define max 3
typedef struct skip 
{
    int data;
    struct skip *next[max];
}*s;
s head=NULL,current,prev,temp;
s getnode()
{
    s new;
     new=malloc(sizeof(struct skip));
    for(int i=0;i<max;i++)
    new->next[i]=NULL;
return new;
}
void display()
{
    temp=head;
    printf("The normal lane\n");
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next[0];
    }
}
void push(int ele)
{
    s new;
    if(head==NULL)
    {
        head=getnode();
        head->data=ele;
        //printf("%d\t",head->data);
        temp=head;
    }
    else
    {
        new=getnode();
        new->data=ele;
        temp->next[0]=new;
        temp=new;
    }
}
void express()
{
    int l;
    for(l=1;l<max;l++)
    {
        int c=1;
        prev=head;
        temp=head;
        printf("\n");
        // printf("express lane %d:",l);
        while(temp->next[l-1]!=NULL)
        {
            if(c%max==0)
            {
                prev->next[l]=temp;
                //printf("%d->",prev->data);
                // printf("%dc\t",c);
                prev=temp;
            }
            temp=temp->next[l-1];
            c++;
        }
        printf("%dt",temp->data);
    }
}
void d()
{
    int lev=1;
 for(int i=0;i<max;i++)
 {
    temp=head;
    printf("\n");
    printf("Express lane %d:",i);
    while(temp)
    {
        printf("%d->",temp->data);
        temp=temp->next[i];
    }
 }
  
}
void search()
{
    int key,lev=max-1,flag=0,count=0;
      prev=head;
        temp=head;
        current=head;
        while(current->next[0]!=NULL)
        {
            current=current->next[0];
        }
    printf("Enter the element to find\t");
    scanf("%d",&key);
    while(lev>=0)
    {
        if(key==head->data)
        {
            flag=1;
            count++;
            printf("Element found\t");
            break;
        }
        else if(key<head->data)
        {
            flag=1;
             count++;
            printf("not found\t");
            break;
        }
        else if(key==current->data)
        {
             flag=1;
              count++;
            printf("Element found\t");
             break;
        }
        else{
            while(temp->next[lev]!=NULL)
            {
                     printf("\ncompared with %d\t" ,temp->data);
                      count++;
                    //   printf("%dt",temp->data);
                if(key==temp->data){
                  
                printf("Element found");
                flag=1;
                break;}
                else if(key>temp->data)
                {
                       //  printf("\t compared with %d",temp->data);
                        prev=temp;
                    temp=temp->next[lev];
                   // printf("%dt",temp->data);
                }
                else
                {
                    temp=prev->next[lev-1];  
                }
               // printf("%dt",temp->data);
            }
        }
         lev--;
       if(flag==1)
       break;
    }
    printf("no of comparisons:%d",count);
}
int main()
{
    int a[size]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19}; 
    for (int i=0;i<size;i++)
    {
        push(a[i]);
    }
    display();
    express();
    d();
    search();
}