#include<iostream>

template<class T>
T sum(T x, T y)
{
	return (x + y);
}

int main()
{
	int a = 2;
	int b = 4;
	float c = 3.2f;
	std::cout << sum(a, b) << std::endl;

	float p = 3.3;
	float q = 5.8;
	std::cout << sum(p, q) << std::endl;

}