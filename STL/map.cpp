#include<bits/stdc++.h>
using namespace std;

int main()
{

    //map stores unique keys in sorted order.
    // map works in logarithmic time complexity.

    map<int,int> mpp;
    map<int,pair<int,int>> mpp1;
    map<pair<int,int>,int> mpp2;

    mpp[1] = 2;
    mpp.emplace({3,1});
    mpp.insert({2,4});

    // these three are for 1st declaration
    // it is inserted as {{1,2},{2,4},{3,1}};

    mpp2[{2,3}] = 10;

    for(auto it : mpp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    // output -> {{1,2},{2,4},{3,1}}

    cout<<mpp[1]; // it gives 2;
    cout<<mpp[5]; // it gives 0(because it doesn't exist)

    auto it = mpp.find(1);// it gives iterator to 3,1
    cout<<*(it).second;

    auto it = mpp.find(5);
    // if the key is not in the map it will return an iterator pointing to mpp.end().

    auto it = mpp.lower_bound(2);
    auto it = mpp.upper_bound(3);

    // erase,empty,size and swap are same as above.






    return 0;   
}