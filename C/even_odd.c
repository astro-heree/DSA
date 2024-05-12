#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("Enter 1 for printing even numbers.\n");
    printf("Enter 2 for printing odd numbers.\n");
    printf("Enter 3 for printing multiplication table.\n");
    scanf("%d",&a);
    switch(a)
    {    
    case 1:
        int i = 2;
        while (i <= 20)
        {
            printf("%d\n",i);
            i = i+2;
        }
        break;
    case 2:
        int j = 1;
        while (j<= 20)
        {
            printf("%d\n",j);
            j = j+2;
        }
        break;
    case 3:
        int b;
        printf("Enter the number whose table you want : ");
        scanf("%d",&b);
        int k = 1;
        while (k<= 10)
        {
            printf("%d * %d is %d\n",b,k,b*k);
            k++;
        }
        break;
    default:
        printf("Enter from 1 to 3 only");
        break;
    }
}