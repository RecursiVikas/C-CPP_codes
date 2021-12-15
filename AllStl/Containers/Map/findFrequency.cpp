// Given an Vector<int>. Find frequency of each element in the given Vector.

#include<iostream>
#include<vector>
#include<map>

using namespace std;

void printVec(vector<int> &v) {
    for(int value : v) {
        cout<<value<<" ";
    }
    cout<<endl;
}

void printMap(map<int,int> &m) {
    for(auto el : m) {
        cout<<el.first<<" = "<<el.second<<endl;
    }
    cout<<endl;
}

int main() {
    vector<int> v1;
    int noOfElements;
    cin>>noOfElements;
    while(noOfElements--) {
        int val;
        cin>>val;
        v1.push_back(val);
    }
    //printVec(v1);
    map<int,int> freqMap;
    for(int value : v1) {
        freqMap[value]++;
    }

    printMap(freqMap);

    return 0;
}