#include <iostream>
using namespace std;

int countCons(string& str , int i , int count)
{
  if(i == str.length())
  {
    return i-count;
  }
  
  if((str[i] == 'a') || (str[i] == 'e') || (str[i] == 'i') || (str[i] == 'o') || (str[i] == 'u'))
  {
    count += 1;
  }
  return countCons(str,i+1, count);
}

int main()
{
  string str;
  cin>>str;
  int i = 0;
  int count = 0;
  cout<<countCons(str,i,count);
}