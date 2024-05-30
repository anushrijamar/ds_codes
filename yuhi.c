#include<stdio.h>
int main()
{
    int t,a,b,c,x,y,z,flag=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);
        if(a>c)
        {
            x=a-c;
            y=x-b;
            if(y>0)
            printf("YES\n");{
            flag=1;}
        }
         if(a>b && flag!=1)
        {
            x=a-b;
            y=x-c;
            if(y>0){
            printf("YES\n");
            flag=1;}
        }
        if(b>c && flag!=1)
        {
            x=b-c;
            y=b-c;
            if(a-x>0 || a-y>0){
            printf("YES\n");
            flag=1;
            }
        }
        else
        {
              x=c-b;
            y=c-b;
            if(a-y>0 || a-x>0){
            printf("YES\n");
            flag=1;}
            
        }
        if(flag!=1)
        {
            printf("NO\n");
        }
        flag=0;
    }
}