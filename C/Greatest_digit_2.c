#include <stdio.h>
void main()
{
int g1, g2;
printf("Get value for g1:");
scanf("%d", &g1);
printf("Get value for g2:");
scanf("%d",&g2);
if (g1 != g2)
{
printf("g1 is not equal to g2\n");
if (g1 > g2)
{
printf("g1 is larger than g2\n");
}
else
{
printf("g2 is larger than g1\n");
}
}
else
{
printf("g1 is equal to g2\n");
}

}