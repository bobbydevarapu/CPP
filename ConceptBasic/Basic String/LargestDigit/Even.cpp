#include <bits/stdc++.h>
using namespace std;

string LargestEvenSubstring(string &s) {
    int j = -1, n = s.size();

    // Find the last even digit
    for (int i = n - 1; i >= 0; i--) {
        if ((s[i] - '0') % 2 == 0) {
            j = i;
            break;
        }
    }

    if (j == -1) return ""; // No even digit found

    int i = 0;
    while (i < n && s[i] == '0') {
        i++; // Skip leading zeros
    }

    return s.substr(i, j - i + 1);
}

int main() {
    string s;
    cout << "Enter number string: ";
    cin >> s;
    cout << "Largest substring with even digit: " << LargestEvenSubstring(s) << endl;
    return 0;
}
