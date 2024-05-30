// int f(int *s,int n)
// {
//      for(i=0;i<n;i++)
//   {
//     s[i]=s[i]+k[i];
//   }
//   return *s;
// }
#include<stdio.h>
int main()
{
  int n,s[100],k[100],i,j,g,h,flag=0;
scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&s[i]);
    scanf("%d",&k[i]);    
  }
   for(i=0;i<n;i++)
  {
    for(j=0;j!=i && j<n;j++){
    if(s[i]==s[j])
    {
        printf("YES\n");
        flag=1;
        break;
    }
  }
  if(flag==1)
  break;  }
  for(i=0;i<n;i++)
  {
    s[i]=s[i]+k[i];
  }
   for(i=0;i<n;i++)
  {
    printf("%d",s[i]);
  }
for(i=0;i<n;i++)
{
    for(j=0;j!=i && j<n;j++)
    {
        if(s[j]-s[i]==2*k[j])
        {
            printf("YES\n");
        flag=1;
        break;
        }
        else
        continue;
    }
}
if(flag!=1)
printf("NO\n");
}