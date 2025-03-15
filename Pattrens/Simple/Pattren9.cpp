#include <bits/stdc++.h>
using namespace std;

class Pattern9 {
private:
    void pattern7(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n - i; j++) {
                cout << " ";
            }
            for (int j = 1; j <= 2 * i - 1; j++) {
                cout << "*";
            }
            for (int j = 1; j <= n - i; j++) {
                cout << " ";
            }
            cout << endl;
        }
    }

    void pattern8(int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                cout << " ";
            }
            for (int j = 0; j < (2 * n - 1) - (2 * i); j++) {
                cout << "*";
            }
            for (int j = 0; j < i; j++) {
                cout << " ";
            }
            cout << endl;
        }
    }

public:
    void printPattern(int n) {  // Renamed from Pattern9 to printPattern
        pattern7(n);
        pattern8(n);
    }
};

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    
    Pattern9 p;  // Create an object of the class
    p.printPattern(n);  // Call the corrected function

    return 0;
}
