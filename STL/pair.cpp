#include<bits/stdc++.h>
using namespace std;

int sumOf(int n)
{
	int temp = 0;
	for(int i = 0; i*i <= n ; i++)
	{
		if(i*i == n) 
		{
			temp += 5;
			break;
		}
	}
	if(n% 4 == 0 && n%6 ==0) temp +=4;
	if(n%2 == 0) temp += 3;
	return temp;
}

int main()
{
    // pair<int,int> temp;
    // temp.first = 1;
    // temp.second = 2;
    // cout<<temp.first<<" "<<temp.second<<endl;
    cout<<sumOf(16)<<endl;
    // pair<int,int>p = {1,3};
    // cout<<p.first<<" "<<p.second;

    // // Nesting of pairs
    // pair<int,<int,int>> p2 = {1,{2,3}};
    // cout<<p.first<<" "<<p.second.first<<" "<<p.second.second;

    // pair<int,int> arr[] = {{1,2},{2,5},{5,1}};

    // cout<<arr[1].second;

}