#include <iostream>
using namespace std;

int firstOcc(int arr[], int s, int e, int key)
{
    // base case
    if (s >= e)
    {
        return 0;
    }
    int mid = s + (e-s)/2;
    int a = -1;
    if(arr[mid]= key)
    {
        a = mid;
    }
    if(arr[mid]>key)
    {
        a = mid;
        e = mid - 1;
    }
    if(arr[mid]<key)
    {
        b = mid;
        s = mid + 1;
    }
    mid = s + (e-s)/2;
    return 0;
}

int main()
{
    int arr[5] = {1, 2, 2, 2, 2};
    int size = 5;
    int key;
    cout << "Enter the key : ";
    cin >> key;
    int a = firstOcc(arr, 0, 4, key);
   // int occ = lastOcc(arr, 0, 4, key) - firstOcc(arr, 0, 4, key);
    cout << "The occurance of the key in the array is : " << a;
}