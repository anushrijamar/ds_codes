#include<stdio.h>
int main()
{
    int i,a[100],n,count=0,s[100],j=0,v=0,y[100];
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("\nenter theh elements\t");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            s[j]=a[i];
            count++;
             j++;
              if(count>=v)
     {
        v=count;
     }
        }
        else{
            count=0;
        }
    
    }
    printf("count is %d",v);
}