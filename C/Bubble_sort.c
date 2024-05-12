#include<stdio.h>
#include<conio.h>

int main()
{
    int a[6];
    printf("Enter 6 elements for the array: ");
    for(int i = 0 ; i < 6 ; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i = 1 ; i<= 6 ; i++)
    {
        for(int j = 6 ; j>=i ; j--)
        {
            if(a[j]<a[j-1])
            {
                int temp = a[j];
                a[j] = a[j-1];
                a[j -1] = temp;
            }
        }
    }
    printf("The sorted order of the array is: ");
    for(int i = 0 ; i< 6 ; i++)
    {
        printf("%d ",a[i]);
    }
}