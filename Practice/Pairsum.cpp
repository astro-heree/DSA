#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    int arr[4] = {a,b,c,d};
    int max = arr[0];
    // 6 1 14 1
    for(int i = 0 ; i < 4 ;i++)
    {
        if(max<arr[i+1])
        {
            max = arr[i+1];
        }
        }
    return max;
}

int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int ans = max_of_four(a, b, c, d);
    cout<<ans;

    return 0;
}