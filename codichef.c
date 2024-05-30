#include<stdio.h>
int f(int *s,int *v,int n)
{
    int flag=0,i;
 for (int step = 0; step < n - 1; ++step) {
      
    // loop to compare array elements
    for (int i = 0; i < n - step - 1; ++i) {
      
      // compare two adjacent elements
      // change > to < to sort in descending order
      if (s[i] > s[i + 1]) {
        
        // swapping occurs if elements
        // are not in the intended order
        int temp = s[i];
        s[i] = s[i + 1];
        s[i + 1] = temp;
      }
    }
  }
  for(i=0;i<n;i++)
  printf("%d",s[i]);
  printf("\n");
  for(i=0;i<n;i++)
  {
    if(s[i]==s[i+1]){
        flag=1;
    printf("YES\n");
    return 1;
    break;}
  }
      for(int i=0;i<n;i++)
 {
    s[i]=s[i]+v[i];
 }
 if(flag!=1)
 return 0;
}
int main()
{
    int n,s[100],v[100],i,j,flag=0,y=1,k[100],l;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
        scanf("%d",&v[i]);
    }
    l=f(s,v,n);
while(y<=100000)
{
    if(l!=1)
    {
          l=f(s,v,n);
    }
else{
 
    flag=1;
break;}
y++;
}




// for(i=0;i<n;i++)
// printf("%d ",s[i]);
    if(flag!=1)
    printf("NO\n");
}