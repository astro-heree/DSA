include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> ls;
    ls.push_back(5);//{5}
    ls.emplace_back(6);//{5,6}
    ls.push_front(4);//{4,5,6}
    ls.emplace_front(3);//{3,4,5,6}

    //rest are same like vector
    //begin,end,rend,rbegin,clear,insert,swap,and size.

    return 0;
}