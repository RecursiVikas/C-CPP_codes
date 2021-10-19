#include<iostream>
using namespace std;

void merge(int* nums,int s1,int e1,int s2,int e2)
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

void mergesort(int* nums,int start,int end)
{
    if(start == end)
        return;
    int mid = (start+end)/2;
    mergesort(nums,start,mid);
    mergesort(nums,mid+1,end);
    merge(nums,start,mid,mid+1,end);
}
int main()
{
    int n;
    cout<<"Enter no. of Elements : ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" Elements : ";
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    } 
    mergesort(arr,0,n-1);
    cout<<"Elements after sorting : ";
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

