#include <bits/stdc++.h>
using namespace std;
void Finding() {
    int a[5] = {1, 3, 2, 4, 5};
    
    // Searching for 3 (Present)
    auto it = find(a, a + 5, 3); 
    cout << "Finding element: " << (*it) << endl;
    
    // Searching for 8 (Not Present)
    auto search = find(a, a + 5, 8); 
    if (search == a + 5) {
        cout << "Not Found" << endl;  // No dereferencing of invalid iterator
    }
}
int main() {
    Finding();
    return 0;
}
