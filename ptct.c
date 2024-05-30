  #include<stdio.h>
int main()
{
  int n,k[100],s[100],i,j,flag=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&s[i]);
    scanf("%d",&k[i]);    
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j!=i && j<n;j++)
    {
      if(k[i]==k[j] && s[i]!=s[j])
      {
        printf("NO\n");
        flag=1;
        break;
      }
      else if(k[i]==k[j] && s[i]==s[j])
      {
         printf("YES\n");
      flag=1;
      break;
      }
      if((s[i]+k[i])==(s[j]+k[j])){
      printf("YES\n");
      flag=1;
      break;}
    }
    if(flag==1)
    break;
  }
 // printf("dgkjdrg");
  if(flag!=1)
  printf("NO\n");
}