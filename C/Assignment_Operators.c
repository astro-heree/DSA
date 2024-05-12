#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,inc_a,inc_b;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    printf("The sum before increment is %d\n",a+b);
    inc_a = ++a;
    inc_b = ++b;
    printf("The sum after increment is %d",inc_a+inc_b);
}