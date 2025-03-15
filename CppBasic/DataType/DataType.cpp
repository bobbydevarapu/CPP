#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "Enter a: ";
    int a;
    cin >> a;
    
    cout << "Enter b: ";
    long long int b;
    cin >> b;
    
    cout << "Enter c: ";
    char c;
    cin >> c;
    
    cout << "Enter d: ";
    double d;
    cin >> d;

    cin.ignore(); // Ignore leftover '\n' before using getline

    cout << "Enter s: ";
    string s;
    getline(cin, s); // Now correctly takes input
    cout<<endl;
    cout << "I'm int: " << a << endl;
    cout << "I'm long long int: " << b << endl;
    cout << "I'm char: " << c << endl;
    cout << "I'm double: " << d << endl;
    cout << "I'm string: " << s << endl;

    return 0;
}
