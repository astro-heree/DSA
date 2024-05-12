#include<stdio.h>

void swap(int *a , int *b)
{
    int c = *a;
    *a = *b;
    *b = c;

    printf("\n In swap, after swapping\n");
    printf("a = %d \t b = %d",*a,*b);
}

int main()
{
    int a , b;
    printf("Enter the first number");
    scanf("%d",&a);
    printf("Enter the second number");
    scanf("%d",&b);
    swap(&a,&b);
    printf("\n In main, after swapping \n");
    printf("x = %d \t y = %d",x,y);
}