#include<iostream>
using namespace std;

void SayDigit(int a,string arr[])
{
    //base case
    if(a==0){
        return;
    }
    //processing
    int digit = a%10;
    a = a/10;

    //recursive relation
    SayDigit(a,arr);
    cout<<arr[digit]<<" ";



}

int main()
{
    int a;
    cout<<"Enter the number";
    cin>>a;

    string arr [10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

    SayDigit(a,arr);
}