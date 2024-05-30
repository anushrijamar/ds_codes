#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int t,m,n,k,i,j,p,q,r,s,o[100][100];
    long long sum,a[100][100];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&m,&n,&k);
        // printf("\n");
        for(i=1;i<=m;i++)
        {
            for(j=1;j<=n;j++)
            {
                scanf("%d",&a[i][j]);
            }
            
        }
        for(i=1;i<=k;i++)
        {
            scanf("%d%d%d%d",&p,&q,&r,&s);
            a[p][q]=0;
            o[p][q]=i;
            sum=abs(q-s)+abs(r-p);
            // printf("%dsum ",sum);
            a[r][s]=pow(2,sum);
        }
        // y=1;
         for(i=1;i<=m;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(a[i][j]==0)
                printf("2^%d ",o[i][j]);
                else
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
        // y=0;
    }
}