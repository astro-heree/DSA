#include <bits/stdc++.h>
using namespace std;

int convert(int n)
{
  if(n%4 == 0) return n;
  if(n%4 == 1) return 1;
  if(n%4 == 2) return n+1;
  if(n%4 == 3) return 0;
}

int main() 
{
  int l = 2;  
  int xorL = convert(l-1);
  int r = 4;
  int xorR = convert(r);
  int ans = xorR ^ xorL;
  cout<<ans;
  
}