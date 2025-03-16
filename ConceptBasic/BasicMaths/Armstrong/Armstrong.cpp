#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n) {
    int sum = 0, temp = n, digits = log10(n) + 1;

    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return sum == n;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << (isArmstrong(n) ? "Armstrong number" : "Not an Armstrong number");

    return 0;
}
