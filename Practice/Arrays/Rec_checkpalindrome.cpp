#include<iostream>
using namespace std;

int checkPalindrome(string a , int s ,int e)
{
    if(s>= e)
    {
        return 1;
    }
    if(a[s] != a[e])
    {
        return 0;
    }
    return checkPalindrome(a,s+1,e-1);
}

int main()
{
    string a;
    cin>>a;
    int s = 0 ; 
    int e = a.length() - 1;
    cout<<checkPalindrome(a,s,e);
}