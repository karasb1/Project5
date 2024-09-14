#include <iostream>
using namespace std;

int p(int a, int b)
{
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			if (i == 0 || i == a - 1 || j == 0 || j == b - 1)
			{
				cout << "* ";
			}
			else
			{
				cout << "  ";
			}
		}
		cout << endl;
	}
	return 0;
}







int main()
{
	int n, k;
	cin >> n >> k;
	cout << p(n, k) << endl;
}