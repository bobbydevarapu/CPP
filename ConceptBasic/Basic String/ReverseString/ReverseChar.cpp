#include <bits/stdc++.h>
using namespace std;

void ReverseChar(vector<char> &s) {
    int l = 0, r = s.size() - 1;
    while (l < r) {
        swap(s[l], s[r]);
        l++, r--;
    }
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    vector<char> s(str.begin(), str.end());

    ReverseChar(s);

    cout << "Reversed string: ";
    for (char c : s) {
        cout << c;
    }
    cout << endl;

    return 0;
}
