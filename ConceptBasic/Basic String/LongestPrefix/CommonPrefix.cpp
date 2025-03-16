#include <bits/stdc++.h>
using namespace std;

string LongestCommonPrefix(vector<string>& str) {
    if (str.empty()) return "";  // Edge case: empty input
    
    int n = str.size();
    sort(str.begin(), str.end());

    string first = str[0], last = str[n - 1], ans = "";
    
    for (int i = 0; i < min(first.length(), last.length()); i++) {
        if (first[i] == last[i]) ans += first[i];
        else break;
    }
    
    return ans;
}

int main() {
    int n;
    cout << "Enter number of strings: ";
    cin >> n;
    
    vector<string> str(n);
    cout << "Enter strings:\n";
    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }
    
    cout << "Longest Common Prefix: " << LongestCommonPrefix(str) << endl;
    return 0;
}
