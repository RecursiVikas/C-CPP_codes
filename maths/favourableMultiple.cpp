/*
    Print the integer just less than equal to N
    which has atleast one among {5 , 7, 11} as a divisor.
*/

#include<iostream>
using namespace std;

int main()
{
    long N;
    cin>>N;
    while(N%5 != 0 && N%7 != 0 && N%11 != 0)
        N--;
    cout<<N<<endl;
}