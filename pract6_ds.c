#include<stdio.h>
int main()
{
    int n;
    printf("Enter no of students :");
    scanf("%d",&n);
    struct student
    {
        int roll_no;
        char name[50];
        int marks;
        int reg_no;
    } s[n];
    int i,m;
    for(i=0; i<n; i++)
    {
        printf("enter the name of student %d =  ",i+1);
        scanf("%s",s[i].name);

        printf("enter the registration no = ");
        scanf("%d",&s[i].reg_no);

        printf("enter the roll no = ");
        scanf("%d",&s[i].roll_no);

        printf("enter marks = ");
        scanf("%d",&s[i].marks);
    }

    printf("Name\tRegistration No.\tRoll NO.\tMarks");
    for(i=0; i<n; i++)
    {
        printf("\n");
        printf("%s\t\t",s[i].name);
        printf("%d\t\t",s[i].reg_no);
        printf("%d\t\t",s[i].roll_no);
        printf("%d",s[i].marks);

    }
    int option;
    printf("\n\nselect 1 for Topper,2 for modification in details");
    scanf("%d",&option);
    if(option==1)
    {
        for (int i = 1; i < n; ++i)
        {
          if (s[0].marks < s[i].marks)
          {
              s[0].marks = s[i].marks;
          }
        }
      printf("Topper Marks is = %d", s[0].marks);

    }

    if(option==2)
    {
        int modify;
        printf("Enter the student no to modify");
        scanf("%d",&modify);
        for(i=0; i<n; i++)
        {
            if(i+1==modify)
            {
                printf("please enter correct details");

                printf("\nenter the name of student %d =  ",i+1);
                scanf("%s",s[i].name);

                printf("\nenter the registration no = ");
                scanf("%d",&s[i].reg_no);

                printf("\nenter the roll no = ");
                scanf("%d",&s[i].roll_no);

                printf("\nenter marks = ");
                scanf("%d",&s[i].marks);
            }
        }
        for(i=0; i<n; i++)
        {
            if(i+1==modify)
            {
                printf("\nCorrected details are:");
                printf("\nName=%s\n",s[i].name);
                printf("\nRegistration Number=%d\n",s[i].reg_no);
                printf("\nRoll Number=%d\n",s[i].roll_no);
                printf("\nMarks=%d",s[i].marks);
            }
        }
    }


    return 0;
}
