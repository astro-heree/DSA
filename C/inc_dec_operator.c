#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,inc_a,inc_b,dec_a,dec_b,decc_b;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    inc_a = ++a;
    inc_b = ++b;
    dec_a = --a;
    dec_b = --b;
    decc_b = b--;
    printf("The increment of a is %d\n",inc_a);
    printf("The increment of b is %d\n",inc_b);
    printf("The decrement of a is %d\n",dec_a);
    printf("The decrement of b is %d\n",dec_b);
    printf("The post decrement of b is %d\n",decc_b);
    }