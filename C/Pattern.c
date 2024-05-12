#include <stdio.h>
#include <conio.h>

int main()
{
    int a;
    printf("Enter 1 for printing the first pattern\n");
    printf("Enter 2 for printing the second pattern\n");
    printf("Enter 3 for printing the third pattern\n");
    printf("Enter 4 for printing the fourth pattern\n");
    printf("Enter 5 for printing the fifth pattern\n");
    printf("Enter 6 for printing the sixth pattern\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        for (int i = 1; i <= 5; i++)
        {
            for (int j = 1; j <= 1; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    break;
    //row pattern
case 2:
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    break;
    //column pattern
case 3:
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    break;
    //half pyramid
case 4:
    for (int i = 1; i <= 5; i+2)
    {
        for (int j = 1; j <= i; j = j+2)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    break;
    //1 3 5 7 9
case 5:
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 10; j= j+2)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    break;
    /*
    1 5 9 13
    2 6 10 14
    3 7 11 15
    4 8 12 16
    */
case 6:
    int count = 13;
    for (int i = 1; i <= 4; i++)
    {
        int k = 1;
        int j = 1;
        for (; j <= count; j = j+4)
        {
            printf("%d ",k);
            k = k +4;
        }
        j = 2;
        printf("\n"); 
        count++;
    }
    break;
    case 7:
    char ch = 'A';
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c",ch);
        }
        ch++;
        printf("\n");
    }
    break;
    case 8:
    
    for (int i = 1; i <= 5; i++)
    {
        char cha = 'A';
        for (int j = 1; j <= i; j++)
        {
            printf("%c",cha);
            cha++;
        }
        
        printf("\n");
    }
    break;
    default:
    printf("Enter between 1 to 6 only");
    break;
    }
}