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
    int n,count=0,i,temp,y[100],j=1,s,c=0;
    
    printf("Enter the number\n");
    scanf("%d",&n);
    temp=n;
    //s=sqt(n);
   // printf("%d\n",temp);
  // printf("1\t");
    for(i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d\t",i);
            if(i!=1){
            y[j]=i*2;
             j++;
             c++;}
            count=count+2;
            
        }
          n=temp;
    }
    s=j;
    y[s]=n;
    for(j=1;j<=c;j++)
    {
        printf("%d\t",y[j]);
    }
    printf("\n%d is number of factors\t",count);
}