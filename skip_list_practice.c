#include<stdio.h>
#include<stdlib.h>
#define max 3
typedef struct skip
{
    int data;
    struct skip *next[max];
}*sk;
sk new2,head=NULL,temp,current,prev;
sk getnode()
{
new2=malloc(sizeof(struct skip));
for(int i=0;i<max;i++)
new2->next[i]=NULL;
return new2;
}
void create_normal(int *a,int n)
{
    int i;
if(head==NULL)
{
    head=getnode();
    head->data=a[0];
    temp=head;
}
for(i=1;i<n;i++)
{
    new2=getnode();
    new2->data=a[i];
    temp->next[0]=new2;
    temp=new2;
}
}
void display()
{
    
    int i=max;
    while(i-- >0){
        printf("\n");
        temp=head;
    while(temp)
    {
        printf("%d->",temp->data);
        temp=temp->next[i];
    }
}}
void search()
{
    int key,flag=0;
    printf("Enter the key to search\t");
    scanf("%d",&key);
    if(head->data==key)
    printf("found\n");
    else
    {
        prev=head;
       
        int lvl=max-1;
         temp=head->next[lvl];
        while(flag!=1)
        {
            printf("\ncomapred with %d",temp->data);
            if(key==temp->data)
            {
                flag=1;
            }
            if(key>temp->data)
            {
                temp=temp->next[lvl];
                prev=prev->next[lvl];
            }
            else 
            {
                lvl--;
                temp=prev->next[lvl];
            }
        }
        if(flag!=1)
        printf("No found");
        else
        printf("Found");
    }

}
void create_ex()
{
    int k=1;
    while(k<max)
    {
        int cnt=0;
        temp=head;
        prev=head;
        while(temp->next[k-1]!=NULL)
        {
            if(cnt%max==0)
            {
                printf("%d attached ",temp->data);
                prev->next[k]=temp;
                prev=temp;
            }
            temp=temp->next[k-1];
            cnt++;
        }
        printf("\n");
          prev->next[k]=temp;
        //   printf("%d last",temp->data);
           k++;
    }
  
}
int main()
{
    int n,i;
    printf("Enter the size\t");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    create_normal(a,n);
    create_ex();
    display();
    char res='y';
    while(res=='y')
    {
        search();
        printf("\nwant\t");
        scanf(" %c",&res);
    }
}