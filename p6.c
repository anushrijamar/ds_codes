#include<stdio.h>
#include<stdlib.h>
typedef struct binary_tree
{
    int data;
    struct binary_tree *left,*right;
}*bst;
bst new2,root=NULL,temp,current,root1;
void insertion(int *a,int n);
bst getnode()
{
new2=malloc(sizeof(struct binary_tree));
new2->left=NULL;
new2->right=NULL;
return new2;
}
void create(int ele)
{
      int flag=0;
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
}
void inorder(bst root1)
{
  if(root1!=NULL)
  {
    inorder(root1->left);
    printf("%d ",root1->data);
    inorder(root1->right);
  }
}
int main()
{
  int b[5]={5,9,3,4,1};
  insertion(b,5);
  for(int i=0;i<5;i++)
  create(b[i]);
  inorder(root);
}
void insertion(int *a,int n)
{
   for(int i=0;i<n;i++)
   {
      int j=i-1;
      int flag=0;
      while(j>=0 && a[j]>a[j+1])
      {
        flag=1;
        int temp=a[j];
      a[j]=a[j+1];
      a[j+1]=temp;
      // printf("swapped %d %d\n",a[i],a[j]);
        j--;
      }
   }
}