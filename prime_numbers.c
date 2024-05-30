#include<stdio.h>
  int sqt(int n)
   {
    int i;
       for( i=0;i*i<n;i++)
       continue;
       return i;
   }
int main()
{
    int n=3,count=0,i,temp,s[100],c=0,j=0,s2;
    
    //  printf("Enter the number\n");
    // scanf("%d",&n);
    // temp=n;
  // s2=sqt(n);
   // printf("%d\n",temp);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0){
        s[j]=i;
        j++;
        if(i!=1){
        s[j]=i*2;
        }}
        n++;
          //n=temp;
    }
    c=j-1;
    for(i=0;i<c;i++)
    {
        printf("%d\t",s[i]);
    }
 //   printf("\n%d is number of factors\t",count);
}