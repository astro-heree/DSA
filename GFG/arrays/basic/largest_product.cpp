#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[7] = {10,2,3,8,1,10,4};
    int n = 7;
    int k = 3;
    int count = 0;
    int max = 0;
    int product = 1;
    for(int i = 0 ; i < 7 ; i++)
    {
        if(count < k)
        {
            product = product * arr[i]; // product = 2
            count++;//count = 2
        }
        else if(count == k)
        {
            product = product/arr[i-k] * arr[i];
        }
        if(max <= product) max = product;
    }
    cout<<max<<endl;
}