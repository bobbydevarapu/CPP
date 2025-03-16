#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, string> m;
    m[3] = "Three";
    m[1] = "One";
    m[2] = "Two";

    for (auto& it : m) {
        cout << it.first << " -> " << it.second << endl;
    }
    return 0;
}
