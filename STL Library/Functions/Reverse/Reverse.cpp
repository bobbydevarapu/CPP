#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    reverse(v.begin(), v.end());
    cout<<"Reversed: ";
    for(int x : v) {
        cout << x << " ";
    }
    return 0;
}
