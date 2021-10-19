#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int len = str.length();
    int i = 0,j = len-1;
    int isPalin = 1;
    while(i<=j)
    {
        if(str[i] != str[j])
        {
            isPalin = 0;
            break;
        }
        i++; j--;
    }
    if(isPalin)
        cout<<"Yes";
    else 
        cout<<"No";

    return 0;

}