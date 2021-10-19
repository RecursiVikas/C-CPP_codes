#include<iostream>
using namespace std;

int pointOfRotation(int arr[],int start,int end)
{
    if(end-start == 1)
    {
        if(arr[start]>arr[end])
            return start;
        else 
            return -1;
    }
    else
    {
    int mid = start+(end-start)/2;
    if(arr[mid]>=arr[start]&&arr[mid]<=arr[end])
        return -1;
    else if(arr[mid]>arr[end])
        return pointOfRotation(arr,mid,end);
    else    
        return pointOfRotation(arr,start,mid);
    }
}

int main()
{
    int arr[10] = {2,3,4,5,6,7,8,9,10,1};
    int por = pointOfRotation(arr,0,9);
    cout<<por<<endl;
    return 0;
}