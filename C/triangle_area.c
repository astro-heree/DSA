#include <conio.h>
#include <stdio.h>
void main()
{
    int a,b,area;
    printf("Enter the height of the triangle\n");
    scanf("%d",&a);
    printf("Enter the base of the triangle\n");
    scanf("%d",&b);
    area = a*b/2;
    printf("The area of the traingle is %d",area);

}