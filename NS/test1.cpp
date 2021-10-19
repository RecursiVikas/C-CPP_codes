#include<iostream>
using namespace std;

int main()
{
    int arr[] = {7,7,5,9,7,5,2,1,2,6};
    int brr[100];
    for(int i = 0;i<99;i++)
        brr[i] = 0;
    for(int i = 0;i<10;i++)
    {
        if(brr[arr[i]]==0)
        {
            cout<<arr[i]<<" ";
            brr[arr[i]]=1;
        }
    }
}