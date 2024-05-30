#include<stdio.h>
int main()
{
    int t,a,b,c,count=0,flag=0,x,y,z;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&a);
         scanf("%d",&b);
         scanf("%d",&c);
         if(a==b && b==c){
         count=0;
         flag=1;}
         else if(a<=c && b<=c){
                x=a;y=b;z=c;
           while(z>y || z>x){
               x=x+1;
               y=y+1;z=z-1;count++;
               if(x==y &&x==z)
               {
                   //break;
                   flag=1;
               }   
           }}
             else if(b>=c && b>=a){
                 x=a;y=b;z=c;
           while(y>x || y>z){
               x=x+1;
               y=y-1;z=z+1;count++;
               if(x==y &&x==z)
               {
                   //break;
                   flag=1;
               }   
           }}
             else{
                    x=a;y=b;z=c;
             
           while(x>y || x>z){
               x=x-1;
               y=y+1;z=z+1;count++;
               if(x==y &&x==z)
               {
                   //break;
                   flag=1;
               }   
           }}
           if(flag!=1)
           printf("-1\n");
           else
           printf("%d\n",count);
           count=0;
           flag=0;
}
}