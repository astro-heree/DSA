#include<iostream>
using namespace std;

string reverse(string a,int s, int e)
{
    if(s>=e)
    {
        return a;
    }
    else
    {
        swap(a[s],a[e]);
        s++;
        e--;  
    }
    return reverse(a,s,e);
}

int main()
{
    string a;
    cin>>a;
    int s = 0, e = a.length()-1;
    cout<<reverse(a,s,e);
    //cout<<a;
}