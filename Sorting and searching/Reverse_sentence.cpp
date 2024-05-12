#include<iostream>
using namespace std;

bool valid(string s)
{
    for(int i = 0 ; i < s.length();i++)
    {
        if((s[i]>= 'a' && s[i]<= 'z') || (s[i]>= 'A' && s[i]<= 'Z')||(s[i]>= '0' && s[i]<= '9'))
        {
            return 1;
        }
        return 0;
    }
}

int spaceCounter(string s)
{
    for (int i = 0 ; i< s.length(); i++)
    {
        int count = 1;
        if(s[i] == '\0')
        {
            count++;
        }
        return count;
    }
}
 void reverse(string& s)
{
    int st = 0;
    int e = s.length() - 1;
    for(int i = 0 ; i<e; i++)
    {
        swap(s[st],s[e]);
        st++;
        e--;
    }
}

int main()
{
    string s = "prakhar";
    cout<<"Enter the string : ";
    cin>>s;
    reverse(s);
    cout<<"The reversed string is : "<<s<<endl;


}