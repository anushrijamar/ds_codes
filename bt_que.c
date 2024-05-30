#include<stdio.h>
#include<stdlib.h>
int q[100],rear=-1,front=-1;
typedef struct binary
{
    int data;
    struct binary *left;
    struct binary *right;
}*bt;
bt root=NULL,temp,current,c,root1,v;
bt getnode()
{
    bt new;
    new=malloc(sizeof(struct binary));
    new->left=NULL;
    new->right=NULL;
    return new;
}
void insert(int ele)
{
    rear++;
    q[rear]=ele;
    if(front==-1)
    {
        front++;
        q[front]=ele;
    }
}
void display()
{
    while(front!=rear)
    {
        printf("%dq\t",q[front]);
        front++;
    }
    printf("%dq0\t",q[front]);
}
// void
void create()
{  char res='y';
    char f='l';
      bt new;
       int flag=0,ele;
    while(res=='y'){
         printf("Enter the data for node\t");
    scanf("%d",&ele);
   //insert(ele);
       new=getnode();
       new->data=ele;
       // temp=root;
        flag=0;
    if(root==NULL)
    {
        root=getnode();
        root->data=ele;
        temp=root;
        flag=1;
    }
    else
    {
         do{
        printf("\tTo which side of %d\t",temp->data);
        scanf(" %c",&f);
        // printf("%c",f);
        if(f =='l')
        {
            if(temp->left==NULL)
            {
                //new=getnode();
                temp->left=new;
                printf("done");
                flag=1;
            }
            else
            {
                temp=temp->left;
            }
        }
        if(f=='r')
        {
            
              //  new=getnode();
            if(temp->right==NULL)
            {
                temp->right=new;
                 printf("done");
                flag=1;
            }
            else
            {
                temp=temp->right;
               // printf("fg");
            }
        }
         
    }while (flag!=1);
    }
printf("\tdo you want to add furthur nodes\t");
scanf(" %c",&res);
}
}
void inorder(bt temp)
{
    if(temp!=NULL){
    inorder(temp->left);
    printf("%d\t",temp->data);
    inorder(temp->right);}
}
int main()
{
    create();
    display();
    inorder(root);
}