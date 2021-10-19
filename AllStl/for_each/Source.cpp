#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void fun(int i)
{
	cout << i << " ";
}

int main()
{
	vector<int> v{ 10,20,30,40,50,60 };
	for_each(v.begin(), v.end(), fun);
	cout << endl;
	return 0;
}