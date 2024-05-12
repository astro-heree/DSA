#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int>q;
    q.push(1);//{1}
    q.push(2);//{1,2}
    q.emplace(4);//{1,2,4}
    q.back(0) += 5;//{1,2,9}
    // adds 5 to the last element here 5;

    cout<<q.back()<<endl;
    //prints 5

    cout<<q.front()<<endl;
    //prints 1

    q.pop();

    cout<<q.front()<<endl;
    //prints 2;

    // size,swap and empty functions same as stack


    return 0;
}