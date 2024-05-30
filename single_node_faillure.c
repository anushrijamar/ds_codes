#include<stdio.h>
#include<stdlib.h>
void bfs(int c[20][20],int n,int mask)
{
    int f=0,r=0,i,j,flag=0,t,k=0,count=0,q[20],a[20];
    printf("\n--------------------------------------------------\n");
        if(mask==0)
    {
        q[r]=1;
        r++;
        count++;
          a[k]=1;
        k++;
    }
    else
    {
        q[r]=0;
        r++;
        count++;
          a[k]=0;
        k++;
    }
    while(f<r)
    {
        i=q[f];
        f++;
        printf("%d ",i);
        j=0;
        while(j<n)
        {
            flag=0;
            if(c[i][j]==1 && j!=mask)
            {
                t=0;
                // printf("%dj ",j);
                while(t <=k-1)
                {
                    if(j==a[t])
                    {
                        flag=1;
                        break;
                    }
                    t++;
                }
                if(flag!=1)
                {
                    q[r]=j;
                    r++;
                    count++;
                    a[k]=j;
                    k++;
                }
              
            }
              j++;
        }
    }
    if(count<n-1)
    printf("%d is the single node failure\n",mask);
}
int main()
{
    int c[20][20],i,j,n;
    printf("Enter size\t");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter element of row %d\t",i+1);
        for(j=0;j<n;j++)
        {
            scanf("%d",&c[i][j]);
        }
    }
    for(i=0;i<n;i++)
    bfs(c,n,i);
}