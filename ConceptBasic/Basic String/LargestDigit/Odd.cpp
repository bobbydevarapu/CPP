#include <bits/stdc++.h>
using namespace std;

string LargerString(string &s) {
    int j = -1; 
    int n = s.size();
    
    // Find the last odd digit
    for (int i = n - 1; i >= 0; i--) {
        if ((s[i] - '0') % 2 == 1) { 
            j = i;
            break;
        }
    }

    if (j == -1) return ""; // No odd digit found

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
    cout << "Largest substring with odd digit: " << LargerString(s) << endl;
    return 0;
}
