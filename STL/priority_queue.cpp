#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int>pq;
    pq.push(5);//{5}
    pq.push(2);//{5,2}
    pq.push(8);//{8,5,2}
    pq.emplace(10);//{10,8,5,2}

    cout<<pq.top()<<endl;//prints 10
    pq.pop();//removes the top element

    cout<<pq.top()<<endl;//prints 8


    //Min heap -> A priority queue where the minimum element stays at the top
    priority_queue<int,vector<int>,greater<int>>pq1;
    pq1.push(5);//{5}
    pq1.push(2);//{2,5}
    pq1.push(8);//{2,5,8}
    pq1.emplace(10);//{2,5,8,10}

    cout<<pq1.top()<<endl;//prints 2 the top element

    

    return 0;
}