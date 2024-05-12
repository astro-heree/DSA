#include <iostream>
using namespace std;

bool checkPalindrome(string &name, int i, int j)
{
    // base case
    if (i > j)
    {

        return 1;
    }
    else if (name[i] == name[j])
    {

        i++;
        j--;
        return true;
    }

    else
    {
        return false;
    }
    checkPalindrome(name, i, j);
}
int main()
{
    string name = "meira";
    bool ans = checkPalindrome(name, 0, name.length() - 1);
    if (ans)
    {
        cout << "The given string is palindrome" << endl;
    }
    else
        cout << "The given string is not palindrome" << endl;
}