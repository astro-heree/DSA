#include<iostream>
#include<stack>
using namespace std;

int main()
{
    string p = ")()()("
    int n = p.length();
    stack <int> s;
    int cnt=0
    for(int i = 0 ; i < n ; i++)
    {
       char ch = p[i];

        if (ch=='(' || ch=='[' || ch=='{'){
            s.push(ch);
        }

        else {

            if(!s.empty()){
                char top = s.top();
                if (ch==')' && top== '(' || ch==']' && top== '[' ||ch=='}' && top== '{' || ){
                    s.pop();
                    cnt++;

                }
                else {

                return false;

                }
            }
            else {
                return false;
            }
        }
    }

    cout<<"count is "<<cnt<<endl;



    




    
}