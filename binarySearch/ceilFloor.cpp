#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int binSearch(long a[],int start,int end,long key)
{
    if(start>end)
    {
        return end;
    }
    else
    {
        int mid = start+(end-start)/2;
        if(a[mid]==key)
            return mid;
        else if(key<a[mid])
            return (binSearch(a,start,mid-1,key));
        else    
            return (binSearch(a,mid+1,end,key));    
    }


}

int main() {

	// Your code here
    int N;
    cin>>N;
    long arr[N];
    for(int i = 0;i<N;i++)
        cin>>arr[i];
    int q;
    cin>>q;
    while(q--)
    {
        long x;
        cin>>x;
        if(x<arr[0])
            cout<<"-1 "<<arr[0]<<endl;
        else if(x>arr[N-1])
            cout<<arr[N-1]<<" -1"<<endl;
        else
        {
            int ceil = binSearch(arr,0,N-1,x);
            if(arr[ceil]==x)
                cout<<arr[ceil]<<" "<<arr[ceil]<<endl;
            else
                cout<<arr[ceil]<<" "<<arr[ceil+1]<<endl;
        }
    } 
	return 0;
}