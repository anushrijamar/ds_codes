#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct binary{
    int data;
    char location[200];
    int salary;
    struct binary *left,*right;
}*bt;
bt root=NULL,current,temp,new2;
bt getnode()
{
    new2=malloc(sizeof(struct binary));
    new2->left=NULL;
    new2->right=NULL;
    return new2;
}
void create()
{
    char res='y',r,l[200];
    int ele,flag=1,i,s;
       if(root==NULL)
        {
            // new2->data=ele;
            printf("Enter the root element\t");
            scanf("%d",&ele);
            printf("Enter the location\t");
            scanf("%s",l);
            printf("Enter the salary\t");
            scanf("%d",&s);
            root=getnode();
            root->data=ele;
            for(i=0;l[i]!='\0';i++)
            root->location[i]=l[i];
            root->salary=s;
            temp=root;
        }
    while(res=='y')
    {
        printf("Enter the element\t");
        scanf("%d",&ele);
         printf("Enter the location\t");
            scanf("%s",l);
            printf("Enter the salary\t");
            scanf("%d",&s);
        new2=getnode();
        new2->data=ele;
        for(i=0;l[i]!='\0';i++)
        new2->location[i]=l[i];
        new2->salary=s;
        temp=root;
        flag=0;
        while(flag!=1)
        {
            printf("\nto which side of %d ",temp->data);
            scanf("%c",&r);
            if(r=='l')
            {
                if(temp->left==NULL)
                {
                    temp->left=new2;
                    flag=1;
                }
                else
                temp=temp->left;
            }
            else if(r=='r')
            {
                if(temp->right==NULL){
                temp->right=new2;
                flag=1;}
                else
                temp=temp->right;
            }
        }
        printf("do you want to continue\t");
        scanf(" %c",&res);
    }
}
bt q[20];
void city()
{
    char c[200];
    int r=0,f=0,flag=0;
    printf("Enter the location you want data of\t");
    scanf("%s",c);
    q[r]=root;
    r++;
    while(f<r)
    {
        temp=q[f];
        f++;
        if(strcmp(temp->location,c)==0)
        {
            printf("\n%d is id",temp->data);
            printf("\n%d is salary",temp->salary);
        }
        if(temp->left!=NULL)
        {
            q[r]=temp->left;
            r++;
        }
        if(temp->right!=NULL)
        {
            q[r]=temp->right;
            r++;
        }
    }
}
int max()
{
    int f=0,r=0,max;
    q[r]=root;
    r++;
    max=root->salary;
    while(f<r)
    {
        temp=q[f];
        f++;
        if(temp->salary>max)
        max=temp->salary;
        if(temp->left!=NULL)
        {
            q[r]=temp->left;
            r++;
        }
        if(temp->right!=NULL)
        {
            q[r]=temp->right;
            r++;
        }
    }
    return max;
}
bt inorder(bt root1)
{
    int i;
    if(root1!=NULL)
    {
        inorder(root1->left);
        printf("\n%d ",root1->data);
        printf("\t%s",root1->location);
        printf("\t%d",root1->salary);
        inorder(root1->right);
    }
}
int main()
{
    int m;
    create();
    inorder(root);
    city();
    m=max();
    printf("\n%d is maximum ",m);
}