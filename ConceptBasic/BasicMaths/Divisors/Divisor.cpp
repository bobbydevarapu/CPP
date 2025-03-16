#include <bits/stdc++.h>
using namespace std;

vector<int> Divisor(int n) {
    vector<int> arr;
    for (int i = 1; i * i <= n; i++) {  // Start from 1 to avoid division by zero
        if (n % i == 0) {
            arr.push_back(i);
            if (i != n / i) {
                arr.push_back(n / i);
            }
        }
    }
    sort(arr.begin(), arr.end());
    return arr;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> divisors = Divisor(n);

    cout << "Divisors of " << n << " are: ";
    for (int div : divisors) {
        cout << div << " ";
    }
    cout << endl;

    return 0;
}
