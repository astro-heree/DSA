#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string t;
    cin>>t;
    //sort(s.begin(),s.end());//ccdeefoors c - 2, d - 1, e - 2 ,f - 1 ,o - 2 ,r - 1 ,s - 1
    //sort(t.begin(),t.end());//cdeeelot c - 1 , d - 1 , e - 3 , l - 1 , t - 1 , o - 1 , t - 1;
                        
    int freq1[26] = {0}; //0 0 2 1 2 1 0 0 0 0 0 0 0 0 2 0 0 1 1 0 0 0 0 0 0 0
                         //0 0 1 1 3 0 0 0 0 0 0 1 0 0 1 0 0 0 0 1 0 0 0 0 0 0
    for(int i = 0 ; i < s.length() ; i++)
    {
        freq1[s[i] - 'a']++;
    }
    int freq2[26] = {0}; 
    for(int i = 0 ; i < t.length() ; i++)
    {
        freq2[t[i] - 'a']++;
    }
    int count = 0;
    for(int i = 0 ;  i < 26 ; i++)
    {
        if(freq1[i] < freq2[i])
        {
            int times = abs(freq1[i] - freq2[i]);
            count += times;
        }
        if(freq1[i] != 0 && freq2[i] == 0)
        {
            count += abs(freq1[i] - freq2[i]);
        }
    }
    cout<<count<<endl;
}