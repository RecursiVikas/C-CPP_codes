//unordered_map is implemented internally using Hash Tables
//Insertion and search takes avgerage O(1)
//If order doesn't matter, use unordered_map
//There are some restrictions on 'key' datatype because we have to create Hash Value for each key

#include<iostream>
#include<unordered_map>

using namespace std;

int main() {
    unordered_map<int,string> um;   //unordered_map<pair<int,int>,string>  ===>   Error!!
    string str = "Vikas";
    um.insert(pair<int,string>(162,str));
    cout<<um[162]<<endl;
    return 0;
}