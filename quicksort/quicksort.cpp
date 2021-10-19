#include<bits/stdc++.h>
using namespace std;

void swap(int arr[],int first,int second)
{
    int temp = arr[second];
    arr[second] = arr[first];
    arr[first] = temp;
}

int partition(int arr[],int start,int end)
{
    int key = arr[start];
    int i = start;
    int j = start+1;
    for(;j<=end;j++)
    {
        if(arr[j]<=key)
            swap(arr,++i,j);
    }
    swap(arr,i,start);
    return i;
}

int* quicksort(int arr[],int start,int end)
{
    if(start<end)
    {
        int correctPivotPos = partition(arr,start,end);
        quicksort(arr,start,correctPivotPos-1);
        quicksort(arr,correctPivotPos+1,end);
        return arr;
    }
    else
        return arr;

}

int main()
{
    int arr[] = {2,7,1,9,3,5,0,8};
    int start = 0;
    int end = sizeof(arr)/sizeof(arr[0])-1;
    int *ptr = quicksort(arr,start,end);
    for(int i = 0;i<=end;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}