#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3};
    next_permutation(v.begin(), v.end());
    cout<<" Permutations are: ";
    for(int x : v) {
        cout << x << " ";
    }
    return 0;
}
