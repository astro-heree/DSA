#include <bits/stdc++.h>
using namespace std;

// if we want to swap numbers we do xor three times.

int main() 
{
  int a = 10;//101
  int b = 15;//111
  a = a^b;
  b = a^b;
  a = a^b;
  
  cout<<a<<endl;
  cout<<b<<endl;
}