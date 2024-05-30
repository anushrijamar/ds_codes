#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define alpha 26
char str[20][26] = {"and","ant", "bat", "ball",
"book","cot", "cotton", "internet", "interview", "joy",
"job", "king", "lion", "man", "mango", "manage","ehj"};
typedef struct trie
{
    struct trie *next[alpha];
    int temp;
}*tt;
tt temp,root=NULL,new2;
tt getnode()
{
    new2=malloc(sizeof(struct trie));
    int i;
    for(i=0;i<alpha;i++)
    new2->next[i]=NULL;
    new2->temp=0;
    return new2;
}

void create()
{
    char y[20];
    int k,i=0,j,flag=0,l;
    printf("Dg");
    if(root==NULL)
    {
        printf("\tjkbv");
        root=getnode();
        printf("root added");
        temp=root;
    }
    while(i<=16)
    {
        j=0;
        flag=0;temp=root;
        l=strlen(str[i]);
        printf("%s length s %d\n",str[i],l);
        while(j<l)
        {
            flag=0;
            k=str[i][j]-'a';
            while(flag!=1)
            {
                if(temp->next[k]==NULL)
                {
                    new2=getnode();
                    temp->next[k]=new2;
                    temp=new2;
                    flag=1;
                    printf("attac\n");
                }
                else
                {
                    temp=temp->next[k];
                    flag=1;
                      printf("attac\n");
                }
            }
            j++;
        }
        temp->temp=2;
        i++;
    }
}
void search()
{
    char s[20];
    int i,flag=0,k,j=0;
    printf("Enter the string to search\t");
    scanf("%s",s);
    i=strlen(s);
    temp=root;
    while(j<i)
    {
        k=s[j]-'a';
        if(temp->next[k]==NULL)
        {
            printf("Not found\n");
            flag=1;
            break;
        }
        else
        temp=temp->next[k];
        j++;
    }
    if(temp->temp==2 && flag!=1)
    printf("Found");
    else
    printf("Not found");
}
int main()
{
    create();
    char res='y';
    while(res=='y')
    {
        search();
        printf("\nwant\t");
        scanf(" %c",&res);
    }
}