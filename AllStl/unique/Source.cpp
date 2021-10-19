#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> v{ 1,1,2,2,2,2,4,4,3,3,3,5,2,3,1,1 };
	auto it = unique(v.begin(), v.end());
	v.resize(it - v.begin());
	for (it = v.begin();it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	cout << "Vector capacity : " << v.capacity() << endl;
	cout << "Vector size : " << v.size() << endl;
	v.reserve(20);
	cout << "Vector capacity : " << v.capacity() << endl;

	return 0;
}