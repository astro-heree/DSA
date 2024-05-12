#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size , int key)
{
    for(int i = 0 ; i<= size ; i++)
    {
        if(arr[i]== key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[5] = { 1,2,3,45,5};
    int key;
    int size = 5;
    cout<<"Enter the key to search in the array ";
    cin>>key;
    bool ans = linearSearch(arr,size,key);

    if(ans)
    {
        cout<<"The key is present";
    }
    else{
        cout<<"The key is not present";
    }

}