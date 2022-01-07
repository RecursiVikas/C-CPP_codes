// Implemented using Red-Black trees which are self-balancing..
// Contains non-duplicate values in a sorted manner..
// Insertion,Searching,Deletion takes O(log(n))..

#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s1;
    s1.insert(10);
    s1.insert(30);
    s1.insert(40);
    s1.insert(10);
    s1.insert(20);
    s1.insert(50);
    for(int val : s1)
    {
        cout<<val<<endl;
    }
    cout<<s1.count(10)<<endl;
    cout<<s1.size()<<endl;
}