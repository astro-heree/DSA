#include <stdio.h>
 void main()
{
 int sw;
printf("Enter a Switch Number between 1 to 5\n");
scanf("%d",&sw);
 switch (sw)
{
 case 1:
 printf("You have pressed SWITCH 1\n");
 break;
 case 2:
 printf("You have pressed SWITCH 2\n");
 break;
 case 3:
 printf("You have pressed SWITCH 3\n");
 break;
 case 4:
 printf("You have pressed SWITCH 4\n");
 break;
 case 5:
 printf("You have pressed SWITCH 5\n");
 break;
 default:
printf("WRONG SWITCH PRESSED\n Press the rightswitch between 1 to 5 only");
 break;
 }
 }
