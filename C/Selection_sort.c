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
    for(int i = 0 ; i< 6 ; i++)
    {
        for(int j = i+1 ; j<=6 ; j++)
        {
            if(a[i]>a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("The sorted order of the array is: ");
    for(int i = 0 ; i< 6 ; i++)
    {
        printf("%d ",a[i]);
    }
}