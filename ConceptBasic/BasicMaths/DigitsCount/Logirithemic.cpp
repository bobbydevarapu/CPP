#include <bits/stdc++.h> 
using namespace std;

int countDigits(int num) {
    if (num == 0) return 1;
    return floor(log10(num) + 1);
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Number of digits: " << countDigits(num) << endl;
    return 0;
}
