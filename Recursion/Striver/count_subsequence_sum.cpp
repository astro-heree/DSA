#include <bits/stdc++.h>
using namespace std;
// prints only one subsequence equal to a particular sum
int getSum(int arr[],int n , int t, int i,int s)
{
    if(i >= n)
    {
      if(t == s)
      {
        return 1;
      }
      return 0;
    }
  
  s = s+arr[i];
  int a = getSum(arr,n,t,i+1,s);

  s = s - arr[i];
  int b = getSum(arr,n,t,i+1,s);

  return a+b;
}

int main() 
{
  int arr[5] = {2,3,4,5,1};
  int size = 5;
  int target = 5;
  int index = 0;
  int sum = 0;
  cout<<getSum(arr,size,target,index,sum);
}