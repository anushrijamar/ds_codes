#include<stdio.h>
int main()

{
for(int i=1;i<=4;i++){

    for(int j=4;j>=1;j--){
        if(j<=i)
        printf("*");
        else printf(" ");
    }
    printf("\n");
   }
}