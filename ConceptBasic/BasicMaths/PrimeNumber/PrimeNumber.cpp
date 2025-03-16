#include <bits/stdc++.h>
using namespace std;

void Prime(int n) {
    if (n < 2) {
        cout << "Not Prime";
        return;
    }
    for (int i = 2; i*i<=n; i++) {
        if (n % i == 0) {
            cout << "Not Prime";
            return;
        }
    }
    cout << "Prime";
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    Prime(n);
    return 0;
}
