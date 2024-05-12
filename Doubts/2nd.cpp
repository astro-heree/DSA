#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n,int &ans)
{
    int count = 0;
    for(int i = 2; i <=n; i++)
    {
        if(n % i == 0) count++;
        //cout<<"isPrime function "<<count<<endl;
        if(count>1) return false;
    }
    //cout<<"Number is: "<<n<<endl;
    cout<<n<<" ";
    //cout<<endl;
    ans = n;
    return true;
}

int main()
{   
    int n = 10;
    int c1 = 0;
    int ans = 0;
    for(int j = 2 ; j < 1000000;j++)
    {
        if(isPrime(j,ans))
        {
            c1++;
            if(c1 == n) break;
        }
    }
    //cout<<ans;
    
}