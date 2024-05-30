// Online C compiler to run C program online
#include <stdio.h>

int main() {
 int i,n,flag=0;
 printf("Enter the number\n");
 scanf("%d",&n);
 for(i=2;i<n;i++)
 {
     if(n%i==0)
     {
         printf("Composite\n");
         break;
     }
     else
     {
         flag=1;
     }
 }
 if(flag==1)
 printf("Prime\n");
    return 0;
}