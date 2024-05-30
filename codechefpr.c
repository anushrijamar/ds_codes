#include<stdio.h>
int swap(int *a,int n)
{
     int count=0,i,temp;
     for(i=1;i<=n;i++)
       {
          if(a[i]==1 && i!=1) 
          {
              temp=a[i];
              a[i]=a[i-1];
              a[i-1]=temp;
              count++;}
       }
           for(i=1;i<=n;i++)
       {
            if(a[i]==n && i!=n)
           {
               temp=a[i];
               a[i]=a[i+1];
               a[i+1]=temp;
               //printf("%d\t",a[i+1]);
               count++;
           }
       }
    //    for(i=1;i<=n;i++)
    //    {
    //     printf("%d",a[i]);
    //    }
       return count;
}
int main()
{
    int t,n,a[1000],i,result;
    scanf("%d",&t);
    while(t--)
    {
       scanf("%d",&n);
       for(i=1;i<=n;i++)
       {
           scanf("%d",&a[i]);
       }
    result= swap(a,n);
  //  printf("r is %d",result);
     while(a[i]==1 && i==1)
     {
        // printf("\njagu");
        if(a[i]==1 && i!=1)
        {
          //  printf("\njagu");
            result=result+swap(a,n);
        }
       else  if(a[i]==n && i!=n)
        {
             result=result+swap(a,n);
        }
      i++;
     }
       printf("%d\n",result);
       
}
}