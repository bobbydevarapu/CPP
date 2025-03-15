#include <bits/stdc++.h>
using namespace std;

int ArraySum(vector<int> &a, int n) { // Pass by reference to avoid extra copies
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> a(n); // Dynamic array
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    cout << "Array sum is: " << ArraySum(a, n) << endl;
    return 0;
}
