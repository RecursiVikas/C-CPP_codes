#include<bits/stdc++.h>
using namespace std;

long powCal(long n,long p)
{
    //n^p
    if(p == 1)
        return n;
    /* 
    if(p%2 == 1)
        return (n*powCal(n,p/2)*powCal(n,p/2));
    return (powCal(n,p/2)*powCal(n,p/2));
    */
    long intr = powCal(n,p/2);
    if(p%2 == 1)
        return (n*intr*intr);
    return (intr*intr);
}

int main()
{
    long n;
    long p;
    cin>>n>>p;
    //calculate n^p
    long result = powCal(n,p);
    cout<<result<<endl;
    return 0;
}