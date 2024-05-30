#include<stdio.h>
#include<limits.h>
void warshal(int n,int c[n][n])
{
  int d[n][n];
  int dist;
  for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
        d[i][j]=c[i][j];
      }
    }
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      for(int k=0;k<n;k++)
      {
        if(j==i || k==i || j==k)
        continue;
        else 
        {
          if(c[j][i]!=INT_MAX && c[i][k]!=INT_MAX)
           dist=c[j][i]+c[i][k];
          if(dist<d[j][k])
          d[j][k]=dist;
        }
      }
    }
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
        c[i][j]=d[i][j];
      }
    }
  }
  printf("\final\n");
  for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
        printf("%d ",d[i][j]);
      }
      printf("\n");
    }

}
int main()
{
  int c[4][4]={
    {0,INT_MAX,-2,INT_MAX},
    {4,0,3,INT_MAX},
    {INT_MAX,INT_MAX,0,2},
    {INT_MAX,-1,INT_MAX,0}
  };int n=4;
   for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
        printf("%d ",c[i][j]);
      }
      printf("\n");
    }
  warshal(4,c);
}