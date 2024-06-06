#include <iostream>
#include <ctime>
using namespace std;


void func_pow(int a, int b, int d, int i = 0)
{
    if (i < b)
    {
        d *= a;
        func_pow(++i);
    }
}


int main() {
    int number, degree;
    cout << "Enter the number: ";
    cin >> number;
    cout << "Enter the degree: ";
    cin >> degree;
    int d = number;
    func_pow(number, degree, d);
    return 0;
}