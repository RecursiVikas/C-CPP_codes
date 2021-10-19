#include<iostream>
#include<array>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int len = str.length();
    int i = 0;
    int j = len-1;
    while(i<=j)
    {
        if(str[i]!=str[j])
        {
            cout<<"Not a Palindrome"<<endl;
            return 0;
        }
        i++;
        j--;
    }
    cout<<"It is Palindrome"<<endl;
    return 0;
}