#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i + 1);
	}
	reverse(v.begin(), v.end());
	auto it = v.begin();
	while (it != v.end())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;
	
	vector<int> v2(10);
	reverse_copy(v.begin(), v.end(), v2.begin());
	it = v2.begin();
	while (it != v2.end())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;

	//cout << v[0] << endl;
	return 0;
}