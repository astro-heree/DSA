#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("Press 1 for Dettol\n");
    printf("Press 2 for Lux\n");
    printf("Press 3 for Lifebuoy\n");
    printf("Press 4 for Park Avenue\n");
    printf("Press 5 for Dove\n");
    printf("Press 6 for Wild Stone\n");
    scanf("%d",&a);
    printf("How many pieces do you want\n");
    scanf("%d",&b);
    switch (a)
    {
    case 1:
        printf("The price of 1 Dettol soap is Rs 30\n");
        printf("The total amount to be paid for %d Dettol soaps is Rs %d ",b,b*30);
        break;
    case 2:
        printf("The price of 1 Lux soap is Rs 20\n");
        printf("The total amount to be paid for %d Lux soaps is Rs %d ",b,b*20);
        break;
    case 3:
        printf("The price of 1 Lifebuoy soap is Rs 25\n");
        printf("The total amount to be paid for %d Lifebuoy soaps is Rs %d ",b,b*25);
        break;
    case 4:
        printf("The price of 1 Park Avenue soap is Rs 40\n");
        printf("The total amount to be paid for %d Park Avenue soaps is Rs %d ",b,b*40);
        break;
    case 5:
        printf("The price of 1 Dove soap is Rs 35\n");
        printf("The total amount to be paid for %d Dove soaps is Rs %d ",b,b*35);
        break;
    case 6:
        printf("The price of 1 Wild Stone soap is Rs 40\n");
        printf("The total amount to be paid for %d Wild Stone soaps is Rs %d ",b,b*40);
        break;
    default:
        printf("Choose from 1 to 6 only");
        break;
    }
}