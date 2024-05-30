#include<stdio.h>
int main()

{
  int k=0;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
for(int i=1;i<=5;++i){

    for(int j=1;j<=5-i;++j){
        printf(" ");  
    }
    while(k!=2*i-1)
    {
        printf("* ");
        ++k;
    }
    k=0;
    printf("\n");
   }
}                                   