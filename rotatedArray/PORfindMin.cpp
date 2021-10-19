#include<iostream>
using namespace std;

int pointOfRotation(long arr[],int start,int end)
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
    int t;
	cin>>t;
	while(t--)
	{
		int n;
        cin>>n;
		long arr[n];	
		for(int i = 0;i<n;i++)
			cin>>arr[i];
   	    int por = pointOfRotation(arr,0,n-1);
		cout<<por<<endl;
		if(arr[0]>arr[por+1])
			cout<<arr[por+1];
		else
			cout<<arr[0];
		cout<<endl;
        //cout<<"Hi"<<endl;
	}
	return 0;
}