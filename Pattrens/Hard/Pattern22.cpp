#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern22(int n) {
        for(int i = 0; i < 2 * n - 1; i++) {
            for(int j = 0; j < 2 * n - 1; j++) {
                int top = i;
                int bot = j;
                int lef = (2 * n - 2) - i;
                int rig = (2 * n - 2) - j;
                cout << (n - min(min(top, bot), min(lef, rig))) << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    Solution obj;
    obj.pattern22(n);
    return 0;
}
