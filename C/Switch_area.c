#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("Press 1 for area of square\n");
    printf("Press 2 for area of rectangle\n");
    printf("Press 3 for area of triangle\n");
    printf("Press 4 for area of circle\n");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        int side,area_sq;
        printf("Enter the side of the square\n");
        scanf("%d",&side);
        area_sq = side*side;
        printf("The area of the square of side %d is %d ",side,area_sq);
        break;
    case 2:
        int length, breadth , area_rt;
        printf("Enter the length of the rectangle\n");
        scanf("%d",&length);
        printf("Enter the breadth of the rectangle\n");
        scanf("%d",&breadth);
        area_rt = length * breadth;
        printf("The area of the rectangle of length %d and breadth %d is %d ", length , breadth, area_rt);
        break;
    case 3:
        float base,height,area_tr;
        printf("Enter the base of the triangle\n");
        scanf("%f",&base);
        printf("Enter the height of the triangle\n");
        scanf("%f",&height);
        area_tr = base* height / 2;
        printf("The area of the traingle of base %f and height %f is %f ",base , height , area_tr);
        break;
    case 4:
        float radius, area_cr;
        printf("Enter the radius of the circle\n");
        scanf("%f",&radius);
        area_cr = 3.14*radius*radius;
        printf("The area of the circle with radius %f is %f ", radius, area_cr);
        break;
    default:
        printf("Enter from 1 - 4 only");
        break;
    }
}