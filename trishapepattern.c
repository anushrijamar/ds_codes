#include<stdio.h>
int main()
{
    int i,t=13,k=7,j;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=13;j++){
                if(i==1)
                {
                    if(j<7)
                    printf(" ");
                    else
                    printf("*");
                }
                else if(i==7)
                {
                    if(j>7)
                    printf(" ");
                    else
                    printf("*");
                }
                else{
                    if(j==k-1)
                    {
                        printf("*");
                        k--;
                    }
                    else if(j==t-1)
                    {
                        printf("*");
                          
                    t--;
                    }
                    else {
                    printf(" ");
                  
                    }
                }
                }
    printf("\n");
}}