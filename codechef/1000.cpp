#include <bits/stdc++.h>
using namespace std;

int main() {
    // int t;
    // cin>>t;
    // while(t--)
    // {
        int n;
        cin>>n;
        int arr[n] = {0};
        if(n % 2 != 0) 
        {
            for(int i = 1 ; i < n ; i = i+2)
            {
                arr[i] = 1;
            }
        }
        else if(n % 4 == 0)
        {
            for(int i = 0; i < n ; i =i+3)
            {
                arr[i] = 1;
            }
        }
        else
        {
            int a = n - n%4;
            for(int i = 0 ; i < a ; i = i+3)
            {
                arr[i] = 1;
            }
            for(int i = a+1 ; i < n ; i++)
            {
                arr[i] = 1;
            }
        }
        string s;
        for(int i = 0 ; i < n ; i++)
        {
            s += to_string(arr[i]);
        }
        cout<<s<<endl; 
    // }
	return 0;
}
