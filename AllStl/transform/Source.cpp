#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int fun(int i)
{
	return (i * 10);
}
int add(int x, int y)
{
	return (x + y);
}

int main()
{
	vector<int> v1{ 10,20,30,40 };
	vector<int> v2(v1.size());
	transform(v1.begin(), v1.end(), v2.begin(), fun);
	auto it = v2.begin();
	while (it != v2.end())
	{
		cout << *it << endl;
		++it;
	}
	cout << endl;
	transform(v1.begin(), v1.end(), v2.begin(), v1.begin(), add);
	int j = 0;
	while (j < v1.size())
	{
		cout << v1.at(j) << " ";
		j++;
	}
	cout << endl;
	return 0;
}