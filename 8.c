#include<stdio.h>
#include<stdlib.h>

typedef struct singly_list
{
    int data;
    struct singly_list *next;

}*SLL;

SLL getnode()
{
    SLL new1= NULL;
    new1 = malloc(sizeof(struct singly_list));
    if(new1 ==NULL)
    {
        printf("\n Memory not availble");
        exit(0);
    }
    new1->next =NULL;
    return new1;
}

int main(){
    SLL head=NULL, temp, new1,temp1;
    //char res;
    int p,ch, count=1,choice;

    for(int i=0;i<7;i++){
        if(head==NULL){
            head=getnode();
            printf("Enter the number of coffees sold in %d day: ",i+1);
            scanf("%d",&head->data);
            temp=head;
        }
        else{
            new1=getnode();
            printf("Enter the number of coffees sold in %d day :",i+1);
            scanf("%d",&new1->data);
            temp->next = new1;
            temp=new1;
        }
    }
    temp->next=NULL;
    temp1=head;

    int a,i=1,date,sum=0,max,min;
    char res;


    do {
        printf("\n1.Display total sale of the day\n2.Display total sale of the week\n3.Maximum and minimun of the bill\nEnter your choice: ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                printf("\nEnter the day to calculate the sale: ");
                scanf("%d",&date);
                temp1=head;
                int i=1;
                while(i!=date){
                    temp1=temp1->next;
                    i++;
                }
                printf("The total sale of the day is %d ",(temp1->data)*20);
                break;

            case 2:
                sum=0;
                temp1=head;
                while(temp1!=NULL){
                    a=temp1->data*20;
                    sum+=a;
                    temp1=temp1->next;
                }
                printf("The total sale of the week is :-> %d",sum);
                break;

            case 3:
                temp1=head;
                max=temp1->data;
                while(temp1!=NULL){
                    if(temp1->data>max){
                        max=temp1->data;
                    }
                    temp1=temp1->next;
                }
                printf("The maximum sale of the week is: %d",max*20);

                temp1=head;
                min=temp1->data;
                while(temp1!=NULL){
                    if(temp1->data<min){
                        min=temp1->data;
                    }
                    temp1=temp1->next;
                }
                printf("\nThe minimum sale of the week is: %d",min*20);
                break;
                }

            printf("\nWant to continue...");
            scanf(" %c",&res);

    }while(res=='y');


 return 0;
}
