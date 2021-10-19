#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

void mergeeven(int* nums,int s1,int e1,int s2,int e2)
{
    int l1 = e1-s1+1;
    int l2 = e2-s2+1;
    int temp[l1+l2];
    int i = 0,j = 0,k = 0;
    while(i<l1 && j<l2)
    {
        if(nums[s1+i]<=nums[s2+j])
        {
            temp[k++] = nums[s1+i];
            i++;
        }
        else
        {
            temp[k++] = nums[s2+j];
            j++;
        }
    }
        while(i<l1)
        {
            temp[k++] = nums[s1+i];
            i++;
        }
        while(j<l2)
        {
            temp[k++] = nums[s2+j];
            j++;
        }
        for(int i = 0;i<(l1+l2);i++)
        {
            nums[s1+i] = temp[i];
        }
    
}

void mergesorteven(int* nums,int start,int end)
{
    if(start == end)
        return;
    int mid = (start+end)/2;
    mergesorteven(nums,start,mid);
    mergesorteven(nums,mid+1,end);
    mergeeven(nums,start,mid,mid+1,end);
}

void mergeodd(int* nums,int s1,int e1,int s2,int e2)
{
    int l1 = e1-s1+1;
    int l2 = e2-s2+1;
    int temp[l1+l2];
    int i = 0,j = 0,k = 0;
    while(i<l1 && j<l2)
    {
        if(nums[s1+i]<=nums[s2+j])
        {
            temp[k++] = nums[s2+j];
            j++;
        }
        else
        {
            temp[k++] = nums[s1+i];
            i++;
        }
    }
        while(i<l1)
        {
            temp[k++] = nums[s1+i];
            i++;
        }
        while(j<l2)
        {
            temp[k++] = nums[s2+j];
            j++;
        }
        for(int i = 0;i<(l1+l2);i++)
        {
            nums[s1+i] = temp[i];
        }
    
}

void mergesortodd(int* nums,int start,int end)
{
    if(start == end)
        return;
    int mid = (start+end)/2;
    mergesortodd(nums,start,mid);
    mergesortodd(nums,mid+1,end);
    mergeodd(nums,start,mid,mid+1,end);
}

int main() {

	// Your code here
  int n;
  cin>>n;
  int arr[n];
  for(int i = 0;i<n;i++)
  {
    cin>>arr[i];
  }
  int i = 0,j = 0;
  while(j<n)
  {
    if(arr[j]%2 ==1 )
    {
      int temp = arr[j];
      arr[j] = arr[i];
      arr[i] = temp;
      i++;
    }
    j++;
  }
  for(int i = 0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  
  mergesortodd(arr,0,i-1);
  mergesorteven(arr,i,n-1);
  for(int i = 0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
	return 0;
}