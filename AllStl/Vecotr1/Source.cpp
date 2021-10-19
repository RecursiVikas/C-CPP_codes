#include<iostream>
#include<vector>

int main()
{
	std::vector<int> v1;
	std::cout << v1.size() << std::endl;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);

	std::vector<int> ::iterator i1;
	for (i1 = v1.begin();i1 != v1.end();i1++)
	{
		std::cout << *i1 << " ";
	}
	std::cout << std::endl;
	i1 = v1.begin();
	std::cout << *i1 << std::endl;
	i1 = i1 + 2;
	std::cout << *i1 << std::endl;
	i1--;
	std::cout << *i1 << std::endl;
	std::cout << i1[-1] << std::endl;
	return 0;
}