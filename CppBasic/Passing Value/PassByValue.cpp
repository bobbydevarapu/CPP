#include <iostream>
using namespace std;

void passByValue(int x) { // A copy of 'n' is created
    x = x + 10;  // Changes only the copy, not the original variable
    cout << "Inside function (pass by value): " << x << endl;
}

int main() {
    int n = 5;
    cout<<"\n";
    cout << "Before function call: " << n << endl;
    passByValue(n);  // Passing a copy
    cout << "After function call: " << n << endl; // Original 'n' remains unchanged
    return 0;
}
