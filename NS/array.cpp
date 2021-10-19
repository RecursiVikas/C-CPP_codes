#include<iostream>
using namespace std;

/*int* fun1()
{
    int arr[] = {12,32,42,44};
    return arr;
}*/

int* fun2()
{
    int* ptr1 = new int(4*sizeof(int));
    *(ptr1+0) = 10;
    *(ptr1+1) = 20;
    *(ptr1+2) = 30;
    *(ptr1+3) = 40;
    return ptr1;
}

int main()
{
   /* int *ptr = fun1();
    for(int i = 0;i<4;i++)
    {
        cout<<*(ptr+i)<<" ";
    }
    cout<<endl;*/
    
    int *ptra = fun2();
    for(int i = 0;i<4;i++)
    {
        cout<<*(ptra+i)<<" ";
    }
    cout<<endl;
    return 0;
}