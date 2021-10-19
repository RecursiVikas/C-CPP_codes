#include<iostream>
#include<vector>

int main()
{
	std::vector<int> v1{ 10,20,30,40 };
	std::vector<int> v2(v1);
	auto it = v2.begin();
	while (it != v2.end())
	{
		std::cout << *it << std::endl;
		it++;
	}

	std::vector<int> v3(6, 8);
	it = v3.begin();
	while (it != v3.end())
	{
		std::cout << *it << std::endl;
		it++;
	}
	return 0;
}