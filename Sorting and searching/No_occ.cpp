#include <iostream>
using namespace std;

int keyOcc(int arr[], int size, int key)
{
    int s = 0;
    int e = size - 1;
    if (s <= e)
    {
        int count = 0;
        for (int i = 0; i <= size; i++)
        {
            if (arr[i] == key)
            {
                count++;
            }

        }
        return count;
    }
    else
    {
        return -1;
    }
    return 0;
}

int main()
{
    int arr[5] = {1, 2, 3, 3, 3};
    int size = 5;
    int key;
    cout << "Enter the key: ";
    cin >> key;

    cout << "The number of occurance of the key is : " << keyOcc(arr, 5, key);
}