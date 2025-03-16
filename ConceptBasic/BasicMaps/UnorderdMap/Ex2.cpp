#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<int, string> um;
    um[3] = "Three";
    um[1] = "One";
    um[2] = "Two";

    for (auto& it : um) {
        cout << it.first << " -> " << it.second << endl;
    }
    return 0;
}
