#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str = "Vikas Saini";
    char first[20];
    char last[20];
    int i = 0;
    for(i = 0;str[i] != ' ';i++)
    {
        first[i] = str[i];
    }
    first[i] = '\0';
    i++;
    int j = i;
    for(;i<str.length();i++)
    {
        last[i-j] = str[i];
    }
    last[i-j] = '\0';

    cout<<last<<" "<<first<<endl;
}