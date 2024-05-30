#include<stdio.h>
int main()
{
    int i,t,a[2000],n,sum[1000],j,temp,y;
    scanf("%d",&t);
    y=t;
    while(y>0){
        scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        a[i]=i;
    }
    for(i=1;i<=n;i++)
    { 
        sum[i]=a[i]+a[n+1-i];
        if(i==2)
        {
            temp=a[i];
            a[i]=a[i-1];
            a[i-1]=temp;
        }
       
        else{
           for(i=1;i<=n;i++){
                    if(a[i]+a[n+1-i]==sum[i-1])
                    {
                          
                             sum[i]=a[i]+a[n+1-i];
                    }
           }
            

        }
    }
   
    for(i=1;i<=n;i++)
    printf("%d ",a[i]);
    printf("\n");
    y--;
}}

