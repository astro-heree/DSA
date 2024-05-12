#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int key;
    printf("Enter the key to search: ");
    scanf("%d",&key);
    int start = 0;
    int end = 9;
    while(start<=end)
    {
        int mid = (start+end)/2;
        if(arr[mid] == key)
        {
            printf("The key is found");
            break;
        }a
        else if(arr[mid]>key)
        {
            end = mid - 1;
        }
        else
        {
            start = start +1;
        }
    }
    if(start>end)
    {
        printf("The key is not found");
    }
}