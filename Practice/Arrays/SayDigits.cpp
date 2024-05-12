#include<bits/stdc++.h>
using namespace std;

void sayDigits(int n)
{
    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

    if(n < 0)
    return;

    
    while(n>0)
    {
        int t = n%10;
        cout<<arr[t]<<" ";
        n = n/10;
    }

}

int main()
{
    int n;
    cout<<"Enter the digits: "<<endl;
    cin>>n;
    int num = 0;

    while(n>0)
    {
        int temp = n%10;
        num = temp + num*10;
        n = n/10;
    }

     sayDigits(num);



    return 0;
}