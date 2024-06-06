#include <iostream>
using namespace std;

int sumInRange(int a, int b, int s = 0) {
    if (a == b) {
        return s + a;
    }
    sumInRange(++a, b, s += a);
}

int main() {
    int a, b;
    cout << "Enter the beginning of range: ";
    cin >> a;
    cout << "Enter end of range: ";
    cin >> b;
    cout << sumInRange(a, b) <<endl;

    return 0;
}