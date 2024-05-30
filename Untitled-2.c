#include<stdio.h>
int main()
{
    int t,i,n,x,a[100],max1,max2,max3,mid,min1,min2,min3,y,j;
    scanf("%d",&t);
    while(t--)
    {
         scanf("%d",&n);
        scanf("%d",&x);
        
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                y=a[i];
                a[i]=a[j];
                a[j]=y;
            }
        }
    }
    /*for(i=0;i<n;i++)
        {
            printf("%d\t",a[i]);
        }*/
        if(n==x)
        printf("0\n");
        else
        printf("%d\n",a[n-x]-1);

    }
}