#include<stdio.h>
#include<stdlib.h>
typedef struct binary_tree
{
    int data;
    struct binary_tree *left,*right;
}*bst;
bst new2,root=NULL,temp,current,root1;
bst getnode()
{
new2=malloc(sizeof(struct binary_tree));
new2->left=NULL;
new2->right=NULL;
return new2;
}
void create()
{
    char res='y';
    int ele,flag=0;
    while(res=='y')
    {
          printf("Enter the element\t");
    scanf("%d",&ele);
      
        if(root==NULL)
        {
            root=getnode();
            root->data=ele;
            temp=root;
        }
        else
        {
            temp=root;
              flag=0;
            new2=getnode();
            while(flag!=1)
            {
                if(temp->data>ele)
                {
                    if(temp->left==NULL)
                    {
                        new2->data=ele;
                        temp->left=new2;
                        flag=1;
                    }
                    else
                    temp=temp->left;
                }
                if(temp->data<=ele)
                {
                    if(temp->right==NULL)
                    {
                        new2->data=ele;
                        temp->right=new2;
                        flag=1;
                    }
                    else
                    temp=temp->right;
                }
            }
        }
        printf("do you want to enter more nodes\t");
        scanf(" %c",&res);
    }
}
bst inorder(bst root1)
{
    if(root1!=NULL)
    {
          printf("%d ",root1->data);
        inorder(root1->left);
        inorder(root1->right);
    }
}
bst q[200],l;
void funct()
{
    int f=0,r=0,i;
    q[r]=root;
    r++;
    q[r]=l;
    while(f<r)
    {
        temp=q[f];
        f++;
     
        if(temp!=l){
               printf("%d ",temp->data);
         if(temp->left!=NULL)
        {
            r++;
            q[r]=temp->left;
        }
        if(temp->right!=NULL)
        {
            r++;
            q[r]=temp->right;
        }
        }
        else
                {
            printf("\n");
            r++;
            q[r]=l;
        }
    }
}
void leaf()
{
    int f=0,r=0,i;
    q[r]=root;
    r++;
    q[r]=l;
    while(f<r)
    {
        
        temp=q[f];
        f++;
        if(temp!=l){
        if(temp->left==NULL && temp->right==NULL)
        printf("%d is the leaf node\n",temp->data);
         if(temp->left!=NULL)
        {
            r++;
            q[r]=temp->left;
        }
        if(temp->right!=NULL)
        {
            r++;
            q[r]=temp->right;
        }
        }
        else
                {
            // printf("\n");
            r++;
            q[r]=l;
        }
    }
}
void parent()
{
    int f=0,r=0,i;
    printf("Enter the element for parent\t");
    int ele;
    scanf("%d",&ele);
    q[r]=root;
    r++;
    q[r]=l;
    while(f<r)
    {
        
        temp=q[f];
        f++;
        if(temp!=l){
         if(temp->left!=NULL)
        {
            r++;
            q[r]=temp->left;
            if(q[r]->data==ele)
            printf("%d is parent of %d\n",temp->data,ele);
        }
        if(temp->right!=NULL)
        {
            r++;
            q[r]=temp->right;
                   if(q[r]->data==ele)
            printf("%d is parent of %d\n",temp->data,ele);
        }
        }
        else
                {
            // printf("\n");
            r++;
            q[r]=l;
        }
    }
}
void child()
{
    int f=0,r=0,i;
    printf("Enter the element for child\t");
    int ele;
    scanf("%d",&ele);
    q[r]=root;
    r++;
    q[r]=l;
    while(f<r)
    {
        temp=q[f];
        f++;
        if(temp!=l){

         if(temp->left!=NULL)
        {
            r++;
            q[r]=temp->left;
            if(temp->data==ele)
            printf("%d is left child\n",q[r]->data);
        }
        if(temp->right!=NULL)
        {
            r++;
            q[r]=temp->right;
              if(temp->data==ele)
            printf("%d is right child\n",q[r]->data);
        }
        
        }
        
        else
                {
            printf("\n");
            r++;
            q[r]=l;
        }
    }

}
void sib()
{
    int f=0,r=0,i,flag=0;
    q[r]=root;
    printf("Enter the element for sibling\t");
    int ele;
    scanf("%d",&ele);
    r++;
    q[r]=l;
    while(f<r)
    {
        temp=q[f];
        f++;
     
        if(temp!=l){
            //    printf("%d ",temp->data);
         if(temp->left!=NULL)
        {
            r++;
            q[r]=temp->left;
            if(q[r]->data==ele && temp->right!=NULL){
            printf("%d is sibliing",temp->right->data);
            flag=1;
            }
        }
        if(temp->right!=NULL)
        {
            r++;
            q[r]=temp->right;
                    if(q[r]->data==ele && temp->left!=NULL){
            printf("%d is sibliing",temp->left->data);
                    flag=1;}
        }
        }
        else
                {
            printf("\n");
            r++;
            q[r]=l;
        }
    }
    if(flag!=1)
    printf("NO SIBLING");
}
void mirr()
{
    int f=0,r=0,i;
    q[r]=root;
    r++;
    q[r]=l;
    while(f<r)
    {
        
        temp=q[f];
        f++;
        if(temp!=l){
            printf("%d ",temp->data);
             if(temp->right!=NULL)
        {
            r++;
            q[r]=temp->right;
        }
         if(temp->left!=NULL)
        {
            r++;
            q[r]=temp->left;
        }
        }
        else
                {
            printf("\n");
            r++;
            q[r]=l;
        }
    }
}
int main()
{
    char res='y';
    int choice;
    create();
    // inorder(root);
    // funct();
    while(res=='y')
    {
        printf("\nEnter choice\n1.BFS\n2.Leaf nodes\n3.parent\n4.sibling\n5.mirror\n6.child\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
        funct();
        break;
        case 2:
        leaf();
        break;
        case 3:
        parent();
        break;
        case 4:
        sib();
        break;
        case 5:
        mirr();
        break;
        case 6:
        child();
        break;        }
        printf("\nwant to\t");
        scanf(" %c",&res);
    }
}