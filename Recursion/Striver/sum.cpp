#include<iostream>
using namespace std;

int getSum(int arr[] , int n , int sum)
{
    cout<<"sum is: "<<sum<<endl;
    cout<<"n is: "<<n<<endl;
    // base case
    if(n == 0)
    {
        return sum; // 1 2 3 4 5
    }

    sum = sum + arr[0];
    cout<<endl;
    return getSum(arr+1 , n-1 , sum);
} 

int main()
{
    int arr[5] = {1,2,3,4,5};
    int sum = 0;
    cout<<getSum(arr,5,sum);
}