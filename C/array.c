#include <conio.h>
#include <stdio.h>

void main()
{
    int arr1[2][2], arr2[2][2], sum[2][2];
    printf("Enter the elements of the first matrix: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &arr1[i][j]);
            printf("Enter the elements for the second matrix: \n");
            scanf("%d", &arr2[i][j]);
            printf("Adding two matrix: \n");
            sum[i][j] = arr1[i][j] + arr2[i][j];
            printf("Printing the matrix:\n");
        }
    }    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
}