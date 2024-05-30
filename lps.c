#include <stdio.h>
int main()
{
  int n;
  printf("Enter length ");
  scanf("%d", &n);
  char a[n];
  for (int i = 0; i < n; i++)
  {
    printf("\nEnter elements:");
    scanf("\t%c",&a[i]);
  }
  int dp[n + 1][n + 1];
  for (int i = 0; i < n; i++)
    dp[0][i] = 0;
  for (int i = 0; i < n; i++)
    dp[i][0] = 0;
  for (int i = 1; i < n; i++)
  {
    for (int j = 1; j < n; j++)
    {
      if (j == i)
        dp[i][j] = 1;
      else
      {
        if (a[i] == a[j] && j-i==2)
          dp[i][j] = 2;
        else
          dp[i][j] = 0;
      }
    }
  }
    for (int length = 2; length <= n; length++) {
        for (int i = 0; i <= n - length; i++) {
            int j = i + length - 1;
            if (a[i] == a[j]) {
                dp[i][j] = dp[i + 1][j - 1] + 2;
            } else {
                dp[i][j] = (dp[i + 1][j] > dp[i][j - 1]) ? dp[i + 1][j] : dp[i][j - 1];
            }
        }
    }
  int max = 1;
  for(int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      printf("%d ", dp[i][j]);
      if (max < dp[i][j])
        max = dp[i][j];
    }
    printf("\n");
  }
  printf("max is %d", max);
}