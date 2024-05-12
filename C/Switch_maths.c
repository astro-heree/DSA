#include<stdio.h>
#include<conio.h>
void main()
{
    int a , b , d,e, c;
    printf("Press 1 for addition\n");
    printf("Press 2 for subtraction\n");
    printf("Press 3 for multiplication\n");
    printf("Press 4 for division\n");
    scanf("%d",&c);
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    d = a/b;
    e = a*b;
    switch(c)
    {
        case 1:
        printf("Sum of %d and %d is %d",a,b,a+b);
        break;
        case 2:
        printf("Difference of %d and %d is %d",a,b,a-b);
        break;
        case 3:
        printf("Product of %d and %d is %d",a,b,e);
        break;
        case 4:
        printf("Quotient of %d and %d is %d",a,b,d);
        break;
        default:
        printf("Choose from 1 to 4 only");
        break;
    }
}