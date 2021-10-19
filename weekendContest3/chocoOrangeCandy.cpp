#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {

	// Your code here
	int x,y,a,b,c;
	//cin>>x>>y>>a>>b>>c;
    x = 2; y = 2; a = 2; b = 2; c = 2;
    long va[a] = {8,6};
    long vb[b] = {9,1};
    long vc[c] = {2,1};
    /*for(int i = 0;i<a;i++)
        cin>>va[i];
    for(int i = 0;i<b;i++)
        cin>>vb[i];
    for(int i = 0;i<c;i++)
        cin>>vc[i];*/

    sort(va,va+a);
    sort(vb,vb+b);
    sort(vc,vc+c);

	long happy = 0;
	int i = a-1; int j = c-1;
	for(int times = 0;times<x;times++)
	{
        if(j>=0)
        {
		if((va[i])>=vc[j])
		{
			happy = va[i]+happy;
			i--;
		}
		else
		{
			happy = happy + vc[j];
			j--;
		}
        }
        else{
            happy = happy + va[i];
            i--;
        }
	}

	i = b-1;
	
	for(int times=0;times<y;times++)
	{
        if(j>=0)
        {
		if(vb[i]>=vc[j])
		{
			happy = vb[i] + happy;
			i--;
		}
		else
		{
			happy = happy + vc[j];
			j--;
		}
        }
        else{
            happy = happy + vb[i];
            i--;
        }
	}
	cout<<happy<<endl;
	return 0;
}