#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    // Check if a string is a palindrome or not
    // Accept 5 strings in an array and show them in dictionary order
    //accept a sentence from the user and find no of vowels and words.
    char str[5][20];
    printf("Enter the elements for 5 strings: \n");

    for(int i = 0 ; i < 5 ; i++)
    {
        printf("Enter the %d string: ",i);
        gets(str[i]);
    }

    for (int i = 0; i < 5; i++)
    {
      for (int j = i + 1; j < 5; j++) 
    {

         // swapping strings if they are not in dictionary order
         if (strcmpi(str[i], str[j]) > 0) 
        {
            char temp[20];
            strcpy(temp, str[i]);
            strcpy(str[i], str[j]);
            strcpy(str[j], temp);
        }
    }
    //Printing the strings
    printf("The strings in dictionary order are: \n");
    for(int i = 0 ; i < 5 ; i++)
    {
        printf("%s \n ",str[i]);
    }
    }
}
