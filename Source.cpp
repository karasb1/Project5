#include <iostream>
#include <cmath>
using namespace std;

int k(int number)
{
	return pow(number, 3);
}

int main()
{
	int number;
	cin >> number;
	cout << k(number) << endl;
	return 0;
}