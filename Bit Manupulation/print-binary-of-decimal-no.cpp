#include<iostream>

using namespace std;

void printBinary(int num)
{
    for(int i = 9;i>=0;i--)        //ith MSB..
    {
        cout<<((num>>i)&1);        //printing bits from MSB to LSB..
        // (any no & 1) will always return 1 or 0..
    }
    cout<<endl;
}

int main()
{
    int num;
    cin>>num;
    printBinary(num);             
    return 0;
}