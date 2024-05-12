#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("Enter the number whose table you want : ");
    scanf("%d",&a);
    int i = 1;
    while(i<=10)
    {
    int c;
    c = i*a;
    printf("%d * %d = %d \n",a,i,c);
    i++;
    }
}