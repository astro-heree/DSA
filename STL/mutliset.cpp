#include<iostream>
using namespace std;

int main()
{
    mulitset<int> ms;
    ms.insert(1);//{1}
    ms.insert(1);//{1,1}
    ms.insert(1);//{1,1,1}

    ms.erase(1);// all the 1's are erased.
    //So if we have to delete the single occurance of 1

    ms.erase(ms.find(1));
    //It deletes only one 1.

    ms.erase(ms.find(1),ms.find(1)+2);
    //deletes 2 ones at the same time.

    
    int count = ms.find(1);// returns the number of 1's in the multiset



    return 0;
}