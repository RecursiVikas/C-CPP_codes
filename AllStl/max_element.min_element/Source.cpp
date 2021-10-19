#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int arr[] = { 23,24,35,21,86,53,11,46,64 };
	cout << *(min_element(arr, arr + sizeof(arr) / sizeof(int)));
	cout << endl;
	auto it = max_element(arr, arr + sizeof(arr) / sizeof(int));
	cout << *it << endl;
	return 0;
}