#include<stdio.h>
#include<conio.h>
void main()
{
    int age;
    printf("Enter your age ");
    scanf("%d",&age);
    if(age<18)
    {
        printf("You are a minor\n");
        printf("You are not eligible for work");
    }
    else 
    {
        if (age>18 && age <= 60)
        {
            printf("You are eligible to work\n");
            printf("Please fill the details and apply");
        }
        else
        {
            printf("You are too old to work\n");
            printf("Please collect your pension");
        }
    }
}