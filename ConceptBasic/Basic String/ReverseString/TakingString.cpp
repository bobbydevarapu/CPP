#include <bits/stdc++.h>
using namespace std;

void reverseString(string &s) {
    int l = 0, r = s.size() - 1;
    while (l < r) {
        swap(s[l], s[r]);
        l++, r--;
    }
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    reverseString(s);

    cout << "Reversed string: " << s << endl;

    return 0;
}
