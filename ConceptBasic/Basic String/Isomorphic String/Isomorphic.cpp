#include <bits/stdc++.h>
using namespace std;

bool Isomorphic(string s, string t) {
    if (s.length() != t.length()) return false;

    int Smap[256] = {0}, Tmap[256] = {0};  // Store character mappings
    int n = s.length();

    for (int i = 0; i < n; i++) {
        if (Smap[s[i]] != Tmap[t[i]]) return false;  // Check mapping consistency
        Smap[s[i]] = Tmap[t[i]] = i + 1;  // Store index + 1 to avoid zero conflicts
    }
    
    return true;
}

int main() {
    string s, t;
    cout << "Enter the s: ";
    cin >> s;
    cout << "Enter the t: ";
    cin >> t;

    if (Isomorphic(s, t))
        cout <<"\n" <<"Yes" << endl;
    else 
        cout<<"\n" << "No" << endl;

    return 0;
}
