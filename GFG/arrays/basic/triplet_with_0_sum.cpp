#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {0,-1,2,-3,1};
    int n = 5;
    sort(arr,arr+n);
    bool ans = false;
    bool sec_case = false;
    for(int j = 0 ; j < n ; j++)
    {
        if(arr[j] < 0)
        {
            ans = true;
            break;
        }
    }
    if(ans = true)
    {
        for(int i = 0 ; i < n ; i++)
        {
            int sum = arr[i];
            int lp = i+1;
            int hp = n-1;
           
            while(lp<hp)
            {
                if(sum+arr[lp]+arr[hp] == 0)
                {
                    sec_case = true;
                    break;
                }
                else if(sum+arr[lp]+arr[hp] < 0)
                lp++;
                else
                hp--;
            }
                if(sec_case == true) break;
        }
        cout<<sec_case;
    }
    else
    cout<<ans;

    return 0;
}