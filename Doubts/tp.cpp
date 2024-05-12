#include<bits/stdc++.h>
using namespace std;

int main()
{
    //vector<string> words = {"abc", "aabbcc"};
    string s = "abc";
    string str = "aabbcc";
    int freq[26] = {0};
    int freq2[26] = {0};
    for(int i = 0 ; i < s.length() ; i++)
    {
        int index = s[i] - 'a';
        freq[index]++;
    }
    for(int i = 0 ; i < str.length() ; i++)
    {
        int c = str[i] - 'a';
        freq2[c]++;
    }
    for(int i = 0 ; i < 26 ; i++) cout<<freq[i]<<" ";
    cout<<endl;
    for(int i =0 ; i < 26 ; i++) cout<<freq2[i]<<" ";
}