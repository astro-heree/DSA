#include<stdio.h>

int main()
{
    int arr[5] , i , *p;
    p = x ;
    //p = &x[0];
    printf("Enter 5 numbers: ");
    for(int i = 0 ; i < 5 ; i++)
    {
        scanf("%d",(p+i));
        //scanf("%d",&x[i]);
    }
    printf("\nThe numbers are \n");
    for(int i = 0 ; i<5; i++)
    {
        //printf("%d\t",x[i]);
        printf("%d\t",*(p+i));
    }
}