#include<iostream>

using namespace std;
int main()
{
	int arr[]{ 10,20,30,40,50 };
	for (int i : arr)
		cout << i << " ";
	return 0;
}