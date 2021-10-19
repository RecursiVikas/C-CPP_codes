#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{

	vector<int> v{ 23,23,44,45,23,435,75,64,2,534,3424,332,34,3354,23 };
	cout << count(v.begin(), v.end(), 23)<< endl;
	//cout << count_if(v.begin(), v.end(), isEven)<< endl;
	return 0;
}

