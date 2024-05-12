#include <stdio.h>
#include <conio.h>
int main()
{
    int a;
    printf("Enter 1 for printing even numbers.\n");
    printf("Enter 2 for printing odd numbers.\n");
    printf("Enter 3 for printing multiplication table.\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:  
        int i = 2;
        do{
            printf("%d\n",i);
            i = i+2;
        } while(i < 20);
        break;
    case 2:
        int j = 1;
        do
        {
            printf("%d\n",j);
            j = j+2;
        } while(j <20);
        break;
    case 3:
        int k = 1;
        do
        {
            int c;
            printf("Enter the number whose table you want: \n");
            scanf("%d",&c);
            printf("%d * %d = %d\n",c,k,c*k);
            k++;
        } while (k<10);
        
    default:
        printf("Enter from 1 to 3 only");
        break;
    }
    return 0;
}