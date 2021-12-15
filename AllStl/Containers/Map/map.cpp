// Map(ordered map in this example) is like Dictionary  =>   (key,value)
// Implemented using Red Black Trees  =>  Search Time is O(n)
// 'keys' are ordered in Map
// 'keys' are immutable, but not values
// It can't have duplicate keys
// Elements in Map are not stored in continuous manner in memory

#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, string> m;
    m[162] = "Vikas";     //TC = log(n)*keySize  // keySize may be long incase of 'strings'
    m[158] = "Sunny";     // while inserting we have to compare the given key with other keys in the map
    m[164] = "Yogesh";
    m[146] = "Rohit";
    m.insert(pair<int, string>(143, "Ravinder"));

    map<int, string>::iterator it;  //iterating over map
    for (it = m.begin(); it != m.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }

    for (pair<int, string> p : m)  //using foreach loop
    { 
        cout << p.second << " " << p.first << endl;
    }

    cout << m.size() << endl; //map size

    auto it1 = m.find(158); //log(n) // return iterartor to the key=158,
    //if no such key returns 'm.end()'

    m.erase(164); //log(n)
    m.erase(it1);
    
    for(auto p : m) {
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}