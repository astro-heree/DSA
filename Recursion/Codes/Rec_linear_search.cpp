#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key)
{
    // base case
    if (size == 0)
    {
        return 0;
    }

    if (arr[0] == key)
    {
        return 1;
    }
    else
    {
        bool remainingPart = linearSearch(arr + 1, size - 1, key);
        return remainingPart;
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 6};
    int size = 5;
    int key = 5;

    bool ans = linearSearch(arr, size, key);

    if (ans)
    {
        cout << "The key is present in the array" << endl;
    }
    else
    {
        cout << "The key is not present in the array" << endl;
    }
}