#include<stdio.h>
#include<string.h>

int main()
{
    char arr[20];
    printf("Enter the string to check for palindrome: ");
    scanf("%s",arr);

    int start = 0;
    int end = strlen(arr) - 1;
    int t = 0; 
    
    for(int i = 0 ; i < end ; i++ )
    {
        if(arr[start] == arr[end])
        {
            start++;
            end--;
        }
        else
        {
            t = 1;
         }
    }
    if(t == 0 )
    {
        printf("The string %s is a palindrome",arr);
    }
    else
    {
        printf("The string %s is not a palindrome.", arr);
    }
}

// int main()
// {
//     char str1[20] , str2[20];
//     printf("Enter the string to check for palindrome: ");
//     scanf("%s",str1);
//     strcpy(str2,str1);
//     strrev(str1);
//     // printf("%s 1st string\n",str1);
//     // printf("%s 2nd string\n",str2);

//     int a = strcmp(str1,str2);

//     if(a == 0)
//     {
//         printf("The string %s is a palindrome",str2);
//     } 
//     else
//     {
//         printf("The string %s is not a palindrome.", str2);
//     }
// }
