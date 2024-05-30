#include<stdio.h>
void selection(int *a,int n);
void insertion(int *a,int n);
int main()
{
  // int a[5]={5,9,3,4,1};
  // selection(a,5);
  int b[5]={5,9,3,4,1};
  insertion(b,5);
}
void insertion(int *a,int n)
{
   for(int i=0;i<n;i++)
   {
      int j=i-1;
      int flag=0;
      while(j>=0 && a[j]>a[j+1])
      {
        flag=1;
        int temp=a[j];
      a[j]=a[j+1];
      a[j+1]=temp;
      printf("swapped %d %d\n",a[i],a[j]);
        j--;
      }
      if(flag){
      
      }
      flag=0;
   }
   for(int i=0;i<n;i++)
   {
    printf("%d ",a[i]);
   }
}
void selection(int *a,int n)
{
  int index;
  for(int i=0;i<n;i++)
  {
    int min=a[i];
    index=i;
    for(int j=i;j<n;j++)
    {
      if(a[j]<min)
      {
        min=a[j];
        index=j;
      }
    }
    int temp=a[i];
    a[i]=a[index];
    a[index]=temp;

  }
  for(int i=0;i<n;i++)
  {
    printf("%d ",a[i]);
  }
}