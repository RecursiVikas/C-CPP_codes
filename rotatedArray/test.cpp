static void floorAndCeil(int a[], int N, int x){	
//Enter your code here
    if(x<a[0])
     {   System.out.print("-1 "+a[0]);
        System.out.println();
     }
    else if(x>a[N-1])
    {    System.out.print(a[N-1]+" -1");
        System.out.println();
    }
    else
    {
        int ceil = binSearch(a,0,N-1,x);
        if(a[ceil]==x)
        {
            System.out.println(a[ceil]+" "+a[ceil]);
        }
        else
            System.out.println(a[ceil]+" "+a[ceil+1]);
    }

}

public static int binSearch(int a[],int start,int end,int key)
{
    if(start==end)
    {
        if(a[start]==key)
            return start;
        else    
            return start-1;
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