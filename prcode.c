// Online C compiler to run C program online
#include <stdio.h>

   int sqt(int n)
   {
    int i;
       for( i=0;i*i<n;i++)
       continue;
       return i;
   }
   int main()
   {
       int n,i,flag=0,s;
       printf("Enter number\n");
       scanf("%d",&n);
       s=sqt(n);
     //  printf("%d",s);
       for(i=2;i<s;i++)
       {
           if(n%i==0)
           {
               printf("Composite");
               break;
           }
           else{
           flag=1;}
           flag=0;
       }
       if(flag==1)
       printf("Prime\n");
    return 0;
   }
