#include <bits/stdc++.h>
using namespace std;
// prints all the subsequences equal to a particular sum
void getSum(int arr[],int n , int t, int i , vector<int>ds,int s)
{
    if(i >= n)
    {
      if(t == s)
      {
        for(auto it : ds)
        cout<<it<<" ";
        cout<<endl;
      }
      return;
    }
  
  s = s+arr[i];
  ds.push_back(arr[i]);
  getSum(arr,n,t,i+1,ds,s);

  s = s - arr[i];
  ds.pop_back();
  getSum(arr,n,t,i+1,ds,s);
}

int main() 
{
  int arr[5] = {2,3,4,5,1};
  int size = 5;
  int target = 5;
  int index = 0;
  vector<int> ds;
  int sum = 0;
  getSum(arr,size,target,index,ds,sum);
}