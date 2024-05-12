#include<bits/stdc++.h>
using namespace std;

 vector<string> findWords(vector<string>& words)
{
    // string r1 = "qwertyuiop";
    // string r2 = "asdfgjkl";
    // string r3 = "zxcvbnm";
    set <char> r1 = {'q','w','e','r','t','y','u','i','o','p'};
    set <char> r2 = {'a','s','d','f','g','h','j','k','l'};
    set <char> r3 = {'z','x','c','v','b' ,'n','m'};

    vector<string> s;
    string firstWord = words[i];//Hello
    char d = (char)tolower(firstWord[i]);//h
    auto it = r1.find(d);
    if(*it == r1.end())
    {
        
    }
    

}

int main()
{

    vector<string> words  = {"Hello","Alaska","Dad","Peace"};
   
    // string s = words[0];
    // cout<<s[0]<<" "<<s[0+2]<<" ";
    // cout<<s<<endl;
    // cout<<(char)tolower(s[0])<<endl;

    // findWords(words);

    // for(auto it : words)
    // {
    //     cout<<it<<" ";
    // }

    // set <char> r1 = {'q','w','e','r','t','y','u','i','o','p'};
    // // for(auto it : r1)
    // // {
    //     auto it = r1.find('e');
    //     cout<<*it;
    // // }



    // string s = "ABCDEFJLFHDSHJGHJ";
    // cout<<(char)tolower(s)<<endl;

}