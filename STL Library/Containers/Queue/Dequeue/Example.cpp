#include <bits/stdc++.h>
using namespace std;

// It same as VECTOR--> operations
int main() {
    deque<int> dq;

    // Insert elements at both ends
    dq.push_back(10);
    dq.push_front(5);
    dq.push_back(15);
    dq.push_front(1);
    cout<<endl;
    cout << "Deque elements: ";
    for (int num : dq) {
        cout << num << " ";
    }
    cout << endl;

    // Access front and back
    cout << "Front element: " << dq.front() << endl;
    cout << "Back element: " << dq.back() << endl;

    // Remove elements from both ends
    dq.pop_front();
    dq.pop_back();

    cout << "Deque after popping front and back: ";
    for (int num : dq) {
        cout << num << " ";
    }
    cout << endl;

    // Insert at specific position
    auto it = dq.begin() + 1;  // Iterator to second element
    dq.insert(it, 7);  // Insert 7 at position 2

    cout << "Deque after inserting 7 at index 1: ";
    for (int num : dq) {
        cout << num << " ";
    }
    cout << endl;

    // Erase an element at a specific position
    dq.erase(dq.begin());  // Remove first element

    cout << "Deque after erasing first element: ";
    for (int num : dq) {
        cout << num << " ";
    }
    cout << endl;

    // Check size
    cout << "Size of deque: " << dq.size() << endl;

    // Clear the deque
    dq.clear();
    cout << "Deque is empty? " << (dq.empty() ? "Yes" : "No") << endl;

    return 0;
}
