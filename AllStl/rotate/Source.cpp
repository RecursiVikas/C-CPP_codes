#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	vector<int> v{ 1,2,3,4,5,6,7,8 };
	auto it = v.begin();
	rotate(it, it + 3, v.end());
	while (it != v.end())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;
	
	vector<int> v2(v1.size());
	rotate_copy(v1.begin(), v1.begin() + 2, v1.end(), v2.begin());
	it = v2.begin();
	while (it != v2.end())
	{
		cout << *it << " ";
	}
	cout << endl;
	return 0;

}