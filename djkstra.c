#include <stdio.h>
#include <limits.h>
void djkistra(int n, int c[n][n])
{
  int d[n];
  int v[n];
  for (int i = 0; i < n; i++)
  {
    v[i] = 0;
  }
  for (int i = 0; i < n; i++)
  {
    d[i] = INT_MAX;
  }
  int count = n;
  int index = 0;
  d[index] = 0;
  v[index]=1;
  int min = INT_MAX;
  while (count > 0)
  {
    min = INT_MAX;
    int j=index;
    printf("\nindex updated %d",j);
    for (int i = 0; i < n; i++)
    {
      if (v[i] != 1 && c[j][i]!=0)
      {
        if (d[i] > c[j][i] + d[j])
        {
          d[i] = c[j][i] + d[j];
        }
      }
    }
    count--;
    v[j]=1;
    min=INT_MAX;
    for(int j=0;j<n;j++)
    {
      if(v[j]!=1)
      {
        if(min>d[j])
        {
          min=d[j];
          index=j;
        }
      }
    }
  }
  for (int i = 0; i < n; i++)
  {
    printf("%d ", d[i]);
  }
}
int main()
{
  int c[6][6]= {
      {0, 4, 5, 0, 0, 0},
      {4, 0, 11, 9, 7, 0},
      {5, 11, 0, 0, 3, 0},
      {0, 9, 0, 0, 13, 2},
      {0, 7, 3, 13, 0, 6},
      {0, 0, 0, 2, 6, 0}};
  djkistra(6, c);
}