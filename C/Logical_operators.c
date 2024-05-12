#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
void main()
{
    int a,b;
    int result;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    result = (a > b) && (a != b);
    printf("(%d > %d) && (%d != %d) is %d \n",a,b,a,b,result);
    result = (a > b) || (a != b);
    printf("(%d > %d) || (%d != %d) is %d \n",a,b,a,b,result);
    result = !(a == b);
    printf("!(%d == %d) is %d",a,b,result);
}