#include<stdio.h>
#include<stdlib.h>
 
typedef struct SinglyLinkedList{
    int data;
    struct SinglyLinkedList* next;  
}*SLL;
 
SLL getnode(){
    SLL new1= NULL;
    new1 = malloc(sizeof(struct SinglyLinkedList));
    if(new1 ==NULL){
        printf("\n Memory not available");
        exit(0);
    }
    new1->next =NULL;
    return new1;
}
 
void printList(SLL temp){
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
 
void printEven(SLL temp){
    int i=0;
    printf("Data at Even Nodes: ");
    while(temp != NULL){
        if(i%2==0){
            printf("%d ", temp->data);
        }
        temp = temp->next;
        i++;
    }
    printf("\n");
}
 
void listSum(SLL temp){
    int sum =0;
    while(temp != NULL){
        sum += temp->data;
        temp = temp->next;
    }
    printf("Sum: %d\n", sum);
}
 
void printOdd(SLL temp){
    int i=0;
    printf("Data at Odd Nodes: ");
    while(temp != NULL){
        if(i%2 !=0){
            printf("%d ", temp->data);
        }
        temp = temp->next;
        i++;
    }
    printf("\n");
}
 
void printMiddle(SLL temp){
    SLL slow = temp;
 
    while(temp->next != NULL){
        if((temp->next)->next == NULL){
            printf("Middle Element: %d ", slow->data);
        }
 
        temp = (temp->next)->next;
        slow = slow->next;
    }    
    printf("Middle Element: %d ", slow->data);  
}
 
void printSecondLast(SLL temp){
    SLL secondLast = temp;
 
    temp = temp->next;
    while(temp->next != NULL){
        temp = (temp->next);
        secondLast = secondLast->next;
    }
    printf("Second Last Element: %d ", secondLast->data);
}
 
void reverseList(SLL temp){
    SLL head = temp;
 
    if(temp->next == NULL){
        head = temp;
        printf("Reversed List: %d ", temp->data);
        return;
    }
 
    reverseList(temp->next);
    SLL rev = temp->next;
    rev->next = temp;
    temp->next = NULL;
    printf("%d ", temp->data);
}
 
SLL createList(){
    SLL head=NULL, temp, new1;
    char res;
    do{
        if(head ==NULL){
            head =getnode();
            printf("\n\tEnter data of head node:\t");
            scanf("%d", &head->data);
            temp =head;
        }
        else{
            new1 = getnode();
            printf("\n\tEnter data of new node:\t");
            scanf("%d",&new1->data);
            temp->next = new1;
            temp = new1;
        }
        printf("\n\t\tWant to add more nodes :\t");
        scanf(" %c", &res);
 
    }while(res =='y');
    return head;
}
 
int main(){  
 
    SLL head = createList();
 
    char res;
    do{
        printf("1. Sum of the data.\n2. Printing odd and even data\n3. Print middle element\n4. Print second last element\n5. Reverse List\n\t");
        int choice;
        scanf("%d", &choice);
 
        switch (choice){
        case 1:
            listSum(head);
            break;
       
        case 2:
            printEven(head);
            printOdd(head);
            printf("(Consider Nodes Start From 0)");
            break;
 
        case 3:
            printMiddle(head);
            break;
 
        case 4:
            printSecondLast(head);
            break;
 
        case 5:
            reverseList(head);
            break;
 
        default:
            printf("ERROR");
            break;
        }
 
        printf("\n\t\tWant to try again?(y/n):\t");
        scanf(" %c", &res);
 
    }while(res =='y');
    // printList(head);
   
}
 
 
 
 
 
 
 
 
 
 
 
 
/*
 
OUTPUT:
 
 
        Enter data of head node:        1
 
                Want to add more nodes :        y
 
        Enter data of new node: 2
 
                Want to add more nodes :        y
 
        Enter data of new node: 3
 
                Want to add more nodes :        y
 
        Enter data of new node: 4
 
                Want to add more nodes :        y
 
        Enter data of new node: 5
 
                Want to add more nodes :        n
1. Sum of the data.
2. Printing odd and even data
3. Print middle element
4. Print second last element
5. Reverse List
        1
Sum: 15
 
                Want to try again?(y/n):        y
1. Sum of the data.
2. Printing odd and even data
3. Print middle element
4. Print second last element
5. Reverse List
        2
Data at Even Nodes: 1 3 5
Data at Odd Nodes: 2 4
(Consider Nodes Start From 0)
                Want to try again?(y/n):        y
1. Sum of the data.
2. Printing odd and even data
3. Print middle element
4. Print second last element
5. Reverse List
        3
Middle Element: 3
                Want to try again?(y/n):        y
1. Sum of the data.
2. Printing odd and even data
3. Print middle element
4. Print second last element
5. Reverse List
        4
Second Last Element: 4
                Want to try again?(y/n):        y
1. Sum of the data.
2. Printing odd and even data
3. Print middle element
4. Print second last element
5. Reverse List
        5
Reversed List: 5 4 3 2 1
                Want to try again?(y/n):        n
 
*/