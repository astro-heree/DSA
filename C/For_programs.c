#include <stdio.h>
#include <conio.h>

void main()
{
    printf("Enter 1 for printing 1 to 5\n");
    printf("Enter 2 for printing even numbers between 1 to 20\n");
    printf("Enter 3 for printing odd numbers between 1 to 20\n");
    printf("Enter 4 for printing multiplication table \n");
    int a;
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        for (int i = 1; i <= 5; i++)
        {
            printf("%d\n", i);
        }
        break;
    case 2:
        for (int j = 2; j <= 20; j = j + 2)
        {
            printf("%d\n", j);
        }
        break;
    case 3:
        for (int k = 1; k <= 20; k = k + 2)
        {
            printf("%d\n", k);
        }
        break;
    case 4:
        printf("Enter the number whose table you want : \n");
        int b;
        scanf("%d", &b);
        for (int l = 1; l <= 10; l++)
        {
            printf("%d * %d = %d \n", b, l, b * l);
        }
        break;
    default:
        printf("Enter between 1 to 4 only");
        break;
    }
}