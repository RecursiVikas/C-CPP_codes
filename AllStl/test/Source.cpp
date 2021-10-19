#include<iostream>
unsigned int diff = 0;
int ac1 = 0, ac2 = 0;
int mx = 0;
int p = 0;

using namespace std;

void solve();

int main()
{
	short int i=0;
	cin >> i;
	while ((i--))
		solve();
	cout << p << " " << mx;
	return 0;
}

void solve()
{
	int s1, s2;
	cin >> s1 >> s2;
	ac1 += s1;
	ac2 += s2;
	if (ac1 > ac2)
	{
		if ((ac1 - ac2) > mx)
		{
			mx = ac1 - ac2;
			p = 1;
		}
	}
	else
	{
		if ((ac2 - ac1) > mx)
		{
			mx = ac2 - ac1;
			p = 2;
		}
	}
}
		