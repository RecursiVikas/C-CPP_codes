#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
	vector<int> v1{ 53,23,55,53,64,24,35,9,12,40 };
	auto it = find(v1.begin(), v1.end(),24);
	cout << *it << endl;
	//if(it==v1.end()) { "Element not Found"};
	return 0;
}