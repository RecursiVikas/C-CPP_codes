#include<iostream>
using namespace std;

int isPrime(int i)
{
    for(int j = 2;j<i;j++)
    {
        if(i%j==0)
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    cin>>n;
    for(int i = 2;i<=n;i++)
    {
        int prime = isPrime(i);
        if(prime)
            cout<<i<<" ";
    }
}