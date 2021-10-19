#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        float e;
        int p;
        cin>>e>>p;
        float result = 1.0;
        int temp = p;
        if(temp<0)
            temp = -temp;
        while(temp--)
            result = result*e;

        cout<<fixed;
        
        if(p>=0)
            cout<<setprecision(2)<<result<<endl;
        else
            cout<<setprecision(2)<<1/result<<endl;
    }
}