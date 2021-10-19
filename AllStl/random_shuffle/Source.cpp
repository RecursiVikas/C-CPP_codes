#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	vector<int> v{ 10,20,30,40,50,60,70,80,90,100 };
	random_shuffle(v.begin(), v.end());
	auto it = v.begin();
	while (it != v.end())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;
	return 0;
}