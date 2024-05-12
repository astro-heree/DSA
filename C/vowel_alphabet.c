#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    printf("Enter the sentence: ");
    gets(str);

    int vowel = 0;
    int len = strlen(str);
    int words = 0;

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            vowel++;
        }
    }
    printf("The entered sentence has %d vowel(s).\n", vowel);

    for (int i = 0; i < strlen(str); i++)
    {
        // single  quote is used for 1 character and double quotes is used for multiple characters.
        if (str[i] == ' '  && str[i + 1] != ' ')
        {
            words++;
        }
    }
    printf("The entered sentence has %d words(s).", words+1);
}