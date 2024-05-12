#include<bits/stdc++.h>
using namespace std;

int main()
{
    deque<int>dq;
    dq.push_back(5);//{5}
    dq.emplace_back(6);//{5,6}
    dq.push_front(4);//{4,5,6}
    dq.emplace_front(3);//{3,4,5,6}

    dq.pop_back(); // {3,4,5}
    dq.pop_front();//{4,5}

    cout<<dq.front()<<endl; // shows the first element
    dq.back();//shows the last element;

    //rest are same like vector
    //begin,end,rend,rbegin,clear,insert,swap,and size.

    return 0;
}