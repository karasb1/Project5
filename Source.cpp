#include <iostream>
using namespace std;

int func(int a, int k = 0)
{
	for (int i = 1; i <= a; i++)
	{
		if (a % i == 0)
		{
			k++;
		}
	}
	return k;
}


int main()
{
	int number;
	cin >> number;
	cout << ((func(number) == 2) ? "true" : "false") << endl;
	return 0;
}