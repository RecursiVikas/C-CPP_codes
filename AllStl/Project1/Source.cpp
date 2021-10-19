#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<int> l{ 10,24,23,7 };
	list<int>::iterator it1;
	for (it1 = l.begin();it1 != l.end();it1++)
	{
		cout << *it1 << " ";
	}
	cout << endl;

	list<int>::reverse_iterator it2;
	for (it2 = l.rbegin();it2 != l.rend();it2++)
	{
		cout << *it2 << " ";
	}
	cout << endl;
	return 0;
}