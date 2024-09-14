#include <iostream>
using namespace std;

int d(int number, int s = 0)
{
	for (int i = 1; i < number; i++)
	{
		if (number % i == 0)
		{
			s += i;
		}
	}
	return s;
}






int main()
{
	int number;
	cout << "Enter the number: ";
	cin >> number;
	cout << ((d(number) == number) ? "true" : "false");
	return 0;
}