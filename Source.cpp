#include <iostream>
using namespace std;

int factorial(int a, int d = 1, int k = 1)
{
	if (a == k)
	{
		return d;
	}
	factorial(a, d * k, ++k);
}




int main()
{
	int a;
	cin >> a;
	cout << factorial(a) << endl;
	return 0;
}