#include<stdio.h>

int fact(int a)
{
    int ans = 1;
    for(int i = 1 ; i<= a ; i++)
    {
        ans = ans * i;
    }
    return ans;
}

int main()
{
    int a;
    printf("Enter the number whose factorial is required: ");
    scanf("%d",&a);
    int ans = fact(a);
    printf("Factorial of %d is %d", a,ans);

}

