#include<bits/stdc++.h>
using namespace std;

int main()
{
    // every operation in a set takes logarithmic time complexity
    set<int>st;
    st.insert(1);//{1}
    st.emplace(2);//{1,2}
    st.insert(2);//{1,2}
    // it won't insert 2 again as it stores only unique elements
    st.insert(4);//{1,2,4}
    st.insert(3);//{1,2,3,4}
    // it inserts 3 between 2 and 4 as it always stores in a sorted order

    //{1,2,3,4,5}
    auto it = st.find(3);
    // it returns the address/iterator of the 3(2nd index)

    //{1,2,3,4,5}
    auto it = st.find(6);
    // if we are searching for something which is not in the set it will return st.end();
    // st.end() means the address after the last element in the set;

    //{1,4,5}
    st.erase(5); // erases the elements and maintains the sorted order of the set.
    //{1,4}

    // we can also delete by passing the iterator into erase function
    auto it = st.find(4);
    st.erase(it); // it takes constant time

    //{1,2,3,4,5}
    //we can also erase multiple elements at a time
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1,it2);
    //after erase {1,4,5} [first,last)

    // lower_bound() and upper_bound() functions work the same as the way they work in vectors.
    auto it3 = st.lower_bound(2);
    auto it4 = st.upper_bound(4);

    int count = st.find(1);
    // the value of count can be either 0 or 1.
    // 0 when element is not present.
    // 1 when the element is present.
    // only 1 because a set only stores unique elements so it can be a maximum of 1 only.


    // size , empty , swap , begin, end etc all work as same as they work in vector






    return 0;
}