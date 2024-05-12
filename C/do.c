#include <stdio.h>

void main()
{
    int k = 1;
    int c;
    printf("Enter the number whose table you want: \n");
    do
    {
        scanf("%d", &c);
        printf("%d * %d = %d\n",c,k,c*k);
        k = k +1;
    } while (k < 11);
}