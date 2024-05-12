include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    //vector of a pair

    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(3,4);

    vector<int> v1(5,100);
    // here 5 is the size of the vector and 100 is the value at each index.

    vector<int> v2(5);
    //here only the size is 5 and all the indexes are filled with garbage values.

    vector<int> v3(5,20);
    vector<int> v4(v3);
    //here we are copying the vector v3 into vector v4.


    vector<int>::iterator it = v.begin();
    it++;
    cout<<*(it)<<" ";

    it = it + 2;
    cout<<*(it)<<" ";

    vector<int>::iterator it = v.end();
    vector<int>::iterator it = v.rend();
    vector<int>::iterator it = v.rbegin();

    cout<<v[0]<<" "<<v.at(0);
    cout<<v.back()<<endl; 
    // prints the last element of a vector

    for(vector<int>::iterator it = v.begin(); it != v.end() ; it++)
    {
        cout<<*(it)<<endl;
    }

    for(auto it = v.begin(); it != v.end(); it++)
    {
        cout<<*(it)<<endl;
    }

    for(auto it : v)
    {
        cout<<it<<" ";
    }

    // erasing element
    // v = {100,200,300,400}
    v.erase(v.begin()+1); // deletes single element
    // new v = {100,300,400}
    v.erase(v.begin(),v.begin+2);//deletes multiple element;
    // new v = {400}
    // here its like [start,end) , so we have to give the address of the next element which we want to remove;

    //inserting elements:
    // v = {10,20,30,40}
    v.insert(v.begin(),10);//inserts 10 at the first index
    // new v = {10,10,20,30,40}
    v.insert(v.begin(),2,5);
    // new v = {5,5,10,10,20,30,40}
    // inserts 2 fives at the first index;

    v.size(); // determines the size of the vector

    v.pop_back();// removes the last element of the vector

    v.swap(v2);// swaps both the vectors
    //ex - v1 = {10,20} , v2 = {30,40} 
    //v1.swap(v2);
    // new v1 = {30,40} , v2 = {10,20}

    v.erase();//clears the entire vector

    cout<<v.empty();//returns 1 when the vector is empty else returns 0;

}