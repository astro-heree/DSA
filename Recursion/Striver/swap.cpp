#include <iostream>
using namespace std;

int main() 
{
  int n;
  cin>>n;
  string str;
  cin>>str;
  bool x = true;
  //abbaca  
  for (int i = 0; i < n/2 ; i++) // abbaca
    {
      if (str[i] != str[i+n/2])
      {
        x = false;
      }
    }
  if(x)
  {
    cout<<"YES"<<endl;
  }
  else
  {
    cout<<"NO"<<endl;
  }
}