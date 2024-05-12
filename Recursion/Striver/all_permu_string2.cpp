#include<bits/stdc++.h>
using namespace std;
// here we don't need to take the ds because we are swapping into the array itself.
void all_permu_string(int arr[] , int n, int ind)
{
    if(ind >= n)
    {
        for(int j = 0 ; j < n ; j++)
        cout<<arr[j]<<" ";
        cout<<endl;
        return;
    }

    for(int i = ind ; i < n ; i++)
    {
        swap(arr[ind],arr[i]);
        all_permu_string(arr,n,ind+1);
        swap(arr[ind],arr[i]);
    }

}

int main()
{
    int arr[3] = {1,2,3};
    int size = 3;
    int index = 0;
    all_permu_string(arr,size,index);
}