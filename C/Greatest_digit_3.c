#include <stdio.h>
void main()
{
int dig1, dig2, dig3;
printf("Enter three numbers: ");
scanf("%d%d%d", &dig1, &dig2,
&dig3);
if(dig1 > dig2)
{
if(dig1 > dig3)
{
printf("dig1 is the maximum");
}
else
{
printf("dig3 is the maximum");
}
}
else
{
if(dig2 > dig3)
{
printf("dig2 is the maximum");
}
else
{
printf("dig3 is the maximum");
}
}
}
