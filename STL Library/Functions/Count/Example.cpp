#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 1, 2, 1};
    int cnt = count(v.begin(), v.end(), 1);
    cout << "Count of 1: " << cnt<<" times";
    return 0;
}
