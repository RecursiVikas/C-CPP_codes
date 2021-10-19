#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> v1{ 23,12,32,3,42,11,39 };
	auto i = v1.begin();
	sort(v1.begin(), v1.end());  //[)
	for (i;i != v1.end();i++)
	{
		std::cout << *i << " ";
	}
	std::cout<<std::endl;
	return 0;
}