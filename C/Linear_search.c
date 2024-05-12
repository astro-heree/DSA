#include<stdio.h>
#include<conio.h>

int main()
{
    printf("Enter the elements for the array: \n");
    int a[10],b;
    for(int i = 0; i<10; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number to be searched: ");
    scanf("%d",&b);
    int c = 0;
    for(int i = 0; i<10; i++)
    {
        if(a[i]==b)
        {
            c = 1;
        }
    }
    if(c)
    {
        printf("Found");
    }
    else{
        printf("Not found");
    }
}