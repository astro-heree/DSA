#include <iostream>
using namespace std;

int binarySearch(int arr[] ,int k, int s , int e)
{
	int mid = s + (e-s)/2;
	while(s <= e)
	{
		if(arr[mid] == k)
		{
			return mid;
			break;
		}
		if(arr[mid] > k)
		{
			e = mid - 1;
		}
		if(arr[mid] < k)
		{
			s = mid + 1;
		}
		mid = s + (e-s)/2;
	}
	return -1;
}

int main() 
{
	int n;
	cout<<"Enter the size: ";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of the array: "<<endl;
	for(int i = 0 ; i < n ; i++)
	{
		cin>>arr[i];
	}
	int t;
	cout<<"Enter the target: ";
	cin>>t;
	int ans = binarySearch(arr,t,0,n-1);
	cout<<"The element is at index: "<<ans;
}