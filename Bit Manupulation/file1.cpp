#include<iostream>
using namespace std;

int main()
{
    cout<<INT_MAX<<" "<<INT_MIN<<endl;
    // int someNum = (1LL<<32);
    int someNum = (1LL<<32)-1;        //  'int' means 'signed int' by default..
    cout<<someNum<<endl;
    // int someNum2 = (1LL<<31);         //  -2147483648
    int someNum2 = (1LL<<31)-1;          //   2147483647
    // Hint: Try using unsigned int.
    cout<<someNum2<<endl;
    return 0;
}