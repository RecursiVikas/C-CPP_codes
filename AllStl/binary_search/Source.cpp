#include<iostream>
#include<algorithm>
#include<vector>
#include<array>

int main()
{
	int a[] { 22,42,13,35,53,23,26,22,24,24,13,22,23 };
	std::vector<int> v(a, a + sizeof(a)/sizeof(int));
	auto i = v.begin();
	for(; i != v.end(); i++)
	{
		std::cout << *i << " ";
	}
	std::cout << std::endl;
	sort(v.begin(), v.end());
	for (i = v.begin(); i != v.end(); i++)
	{
		std::cout << *i << " ";
	}
	std::cout << std::endl;

	if (binary_search(v.begin(), v.end(), 22))
	{
		std::cout << "22 is present.\n";
	}
	std::cout << std::endl;

	auto ub = upper_bound(v.begin(), v.end(), 22);
	std::cout << "Upper Bound for 22 at " << ub - v.begin() << std::endl;
	
	auto lb = lower_bound(v.begin(), v.end(), 22);
	std::cout << "Lower Bound for 22 at " << lb - v.begin() << std::endl;
	
	return 0;
}