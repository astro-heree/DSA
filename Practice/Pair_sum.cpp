#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }
    int t;
    cin>>t;
    for(int j = 0 ; i < n ; j++)
    {
        for(int i = 0 ; i < n ; i++) // 1 2 3 4 5 t -> 5
        {
            int temp = target - arr[j];
            if(arr[i] == temp)
            {
                cout<<arr[j]<<" "<<temp<<endl;
            }
            else if(temp > arr[i])
            {
                break;
            }
        }
    }

}