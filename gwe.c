#include<stdio.h>

int main()
{
    int n,a[100000],temp,i,c=0,t,flag=0;
    scanf("%d",&t);
    while(t--){
    scanf("%d\n",&n);
   a[1]=n;
   a[2]=n-1;
   c=3;
    for(i=2;i<=n;i++)
    {
       c=c+i;
       if(c%i==0)
       {
        a[i]=i+1;
       }
        else
        a[i]=i;
    }
    if(flag==1)
    printf("-1");
    else{
    for(i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }}
    printf("\n");
}}