#include<stdio.h>
#include<stdlib.h>
typedef struct binary
{
    int data;
    struct binary *left;
    struct binary *right;
}*bt;
bt root=NULL,temp,current,c,root1,v;
bt que[20];
int f=-1,r=-1;

void n()
{
   f++;
   r++;
   que[r]=root;
   temp=root;
   int count=0;
//    int v=0;
  while(f<=r)
  {
    printf("%d ",que[f]->data);
    if(count==0 )
    {
        printf("\n");
    }
    else{
    count--;
}
    temp=que[f];
        f++;
    if(temp->left!=NULL)
    {
        r++;
        que[r]=temp->left;
        if(count==0){      
       count++;}
       else
       v++;
    }    
    if(temp->right!=NULL)
    {
        r++;
        que[r]=temp->right;
    }
  }
}

bt getnode()
{
    bt new;
    new=malloc(sizeof(struct binary));
    new->left=NULL;
    new->right=NULL;
    return new;
}
void create()
{  char res='y';
    char f='l';
      bt new;
       int flag=0,ele;
    while(res=='y'){
         printf("Enter the data for node\t");
    scanf("%d",&ele);
   // insert(ele);
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
         temp=root;
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
    // display();
    // inorder(root);
    n();
    // qdisplay();
}