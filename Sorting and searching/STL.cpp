#include <bits/stdc++.h>
using namespace std;

void print (vector<int> v)
{
    for(auto c : v)
    {
        cout<<c<<" ";
    }
}

int main() 
{
    // vector<int> v = {1,2,3,4,5};
    // cout<<v[2]<<endl;

    string a,b;
    cin>>a; //arora
    cin>>b; //arora

    for(int i = 0 ; i < a.length() ; i++)
    {
        if(a[i] != b[i])
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }

    // vector<int>::iterator it = v.begin();
    // it++;
    // cout<<*(it+3);
    // for(vector<int>::iterator it = v.begin() ; it != v.end();it++)
    // {
    //     cout<<*(it);
    // }
    // cout<<endl;

    // for(auto it = v.begin() ; it != v.end() ; it++)
    // {
    //     cout<<*(it);
    // }
    // cout<<endl;
    // for(auto c : v)
    // {
    //     cout<<c;
    // }

    //erasing 1 element
    //v.erase(v.begin()+4);

    //erasing multiple elements
    // v.erase(v.begin() + 1 , v.begin()+4);
    // delete function me left limit square bracket h aur right limit parenthesis h [2,5)
    // print (v);

    // inserting into vector 1 element
    // v.insert(v.begin()+2,6);
    // print(v);

    // inserting into vector multiple element
    // v.insert(v.begin(),3,2);
    // print(v);
    


}

