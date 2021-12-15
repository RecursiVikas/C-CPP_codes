#include<iostream>
#include<utility>

using namespace std;

int main(){
    //cout<<"Hi Pair"<<endl;
    pair<string,string> name1("Vikas","Saini");
    cout<<name1.first<<" "<<name1.second<<endl;

    pair<string,string> name2 = make_pair("Rohit","Sharma");
    cout<<name2.first<<" "<<name2.second<<endl;

    name1 = name2; // '=' is overloaded..
    cout<<name1.first<<" "<<name1.second<<endl;
    return 0;
}