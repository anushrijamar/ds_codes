#include<stdio.h>
#include<stdlib.h>
typedef struct node {
    int data;
    struct node *next;
}*k;
k last = NULL;
k head = NULL;
k temp;
k current;
void sort(k node)
{
    int te;
    current=head;
  temp=head->next;
  while(current){
     // current=head;
     temp=head;
while(temp)
{
    if(current->data>temp->data)
    {
        te=current->data;
        current->data=temp->data;
        temp->data=te;
        //current=current->next;
    }
    else
    temp=temp->next;
}
current=current->next;
  }
}
void reverse(k node)
{
    k t1,t2,t3;
    t1=head;
    t2=t1->next;
    t3=t2->next;
    t1->next=NULL;
    while(t2->next!=NULL)
    {
        t2->next=t1;
        t1=t2;
        t2=t3;
        t3=t3->next;
    }
    t2->next=t1;
    t2=head;
    }
void create(int ele)
{
    k newnode=(struct node*)malloc(sizeof (struct node));
   // printf("Enter the data of node");

  //  scanf ("%d",&newnode->data) ;
    newnode->data = ele;
    newnode->next=NULL;
    if(head==NULL)
    {
        head = newnode;
        last = head;
    }
    else{
        last->next=newnode;
        last=newnode;
    }
}
void display()
{
  k current;
    current=head;
    while(current!=NULL)
    {
        printf("%d~>",current->data);
        current=current->next;
    }
    printf("NULL");
}
// void insert(s node,int pos)
// {
//     printf("df");
// }
// void delete(s node,int pos)
// {
//     printf("dfgj");
// }
int main()
{
    create(95);
  
    create(04);
      create(11);
        create(35);
    create(20);
      // display();
   int choice,ele;
   int s=1;
    while (s == 1){
        printf("Enter 1.create.display for 2\n3.reverse\n\n");
          printf("Enter choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("Eneter the element\n");
            scanf("%d",&ele);
            create(ele);
            break;
        
        case 2:
        
        sort(head);
        // sort(head);
            display();
        break;
        case 3:
        reverse(head);
        display();
        break;
        case 4:
        display();
        break;
        }
        
    // if(head == NULL).
    // {
    //     head= create();
    //     temp = head ;    
    // }
    // else {
    //     newnode = create();
    //     temp->next = newnode ;
    //     temp = newnode;
    // }
    printf("do you want to continue ");
    scanf("%d",&s);
    // printf("demo");
   
    }
    
   // display(head);
}

