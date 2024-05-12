#include<stdio.h>
#include<conio.h>
void main()
{
    int var1, var2;
    printf("Input the value of var1: ");
    scanf("%d",&var1);
    printf("Input the value of var2: ");
    scanf("%d",&var2);
    if(var1 != var2)
    {
        printf("var1 is not equal to var2\n");
        if (var1>var2)
        {
            printf("var1 is greater than var2");
        }
        else 
        {
            printf("var2 is greater than var1");
        }
        
    }
    else 
    {
        printf("var1 is equal to var2");
    }    
}