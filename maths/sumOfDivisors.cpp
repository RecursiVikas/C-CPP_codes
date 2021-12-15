#include<iostream>
using namespace std;

int main()
{
    int n = 4;
    int sum = 0;
    for(int i = 1;i<=2;i++)
    {
        if(n%i == 0)
        {
            if(n/i == i)
                sum = sum + i;
            else
                sum = sum + i + n/i;
        }
    }
    cout<<sum<<endl;
}