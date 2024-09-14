#include <iostream>
using namespace std;

int h(int number)
{
	if (number > 0)
	{
		return true;
	}
	else if (number < 0)
	{
		return false;
	}
	else
	{
		return 0;
	}
}


int main()
{
	int number;
	cin >> number;
	cout << h(number) << endl;
	return 0;
}