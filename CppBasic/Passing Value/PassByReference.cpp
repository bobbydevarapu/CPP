#include <iostream>
using namespace std;

void passByReference(int &x) { // 'x' is a reference to 'n'
    x = x + 10;  // Directly modifies the original variable
    cout << "Inside function (pass by reference): " << x << endl;
}

int main() {
    int n = 5;
    cout<<"\n";
    cout << "Before function call: " << n << endl;
    passByReference(n);  // Passing reference
    cout << "After function call: " << n << endl; // Original 'n' is modified
    return 0;
}
