#include <stdio.h>
# define SIZE 100
void enqueue();
void dequeue();
void show();
int inp_arr[SIZE];
int Rear = - 1;
int Front = - 1;
void enqueue()
{
    int insert_item;
    if (Rear == SIZE - 1)
       printf("Overflow \n");
    else
    {
        if (Front == - 1)
          Front = 0;
        printf("Vehicle to be inserted in the Queue : ");
        scanf("%d", &insert_item);
        if(insert_item == 2 || insert_item==4){
        Rear = Rear + 1;
        inp_arr[Rear] = insert_item;
          }
        else{
            printf("****Enter correct vehicle*****");
            exit(0);
        }
    }
}

int main()
{

   int n,check;
   printf("Enter number of elements in queue\t");
     scanf("%d",&n);
    for(int i=0;i<n;i++){
        enqueue();
    }
    for(int i=0;i<n;i++){
            if(i==n-1){
                break;
            }
        if(inp_arr[i]==2){
            if(inp_arr[i+2]==2){
                    printf("***Not Balanced***");
                    exit(0);
                }
            if(inp_arr[i+2]==4){
                continue;
            }
            else if(inp_arr[i+1]==2){
                printf("****Not Balanced***");
                exit(0);
        }
        }
        else if(inp_arr[i]==4){
            if(inp_arr[i+1]==2){
                continue;
            }
            else if(inp_arr[i+1]==4){
                printf("****Not Balanced***");
                exit(0);
        }
        }
    }
    printf("The Entered queue is proper");
return 0;
}