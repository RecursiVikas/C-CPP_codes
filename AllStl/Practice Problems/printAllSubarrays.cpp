#include<iostream>
using namespace std;

int main()                                        
{
    int arr[4] = {1,2,3,4};
    int arrSize = 4; 
    for(int i = 0;i<arrSize;i++)                 // O(n^3)
    {
        for(int j = i;j<arrSize;j++)
        {
            for(int k = i;k<=j;k++)
                cout<<arr[k]<<" ";
            cout<<endl;
        }
        cout<<endl;
    }
}

// No of subarrays = n*(n+1)/2