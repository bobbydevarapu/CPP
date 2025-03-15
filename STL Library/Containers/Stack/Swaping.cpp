#include <bits/stdc++.h>
using namespace std;

void Swapping() {
    stack<int> st1;
    stack<int> st2;

    // Pushing elements into st1 and st2
    st1.push(10);
    st1.push(20);
    st1.push(30);
    st2.push(40);
    st2.push(50);
    st2.push(60);

    // Display stacks before swapping
    cout << "Before Swapping:\n";
    stack<int> temp1 = st1, temp2 = st2;
    
    cout << "Stack 1: ";
    while (!temp1.empty()) {
        cout << temp1.top() << " ";
        temp1.pop();
    }
    cout << "\nStack 2: ";
    while (!temp2.empty()) {
        cout << temp2.top() << " ";
        temp2.pop();
    }
    cout << endl;

    // **Swapping stacks using swap()**
    st1.swap(st2);

    // Display stacks after swapping
    cout<<endl;
    cout << "After Swapping:\n";
    temp1 = st1, temp2 = st2;

    cout << "Stack 1: ";
    while (!temp1.empty()) {
        cout << temp1.top() << " ";
        temp1.pop();
    }
    cout << "\nStack 2: ";
    while (!temp2.empty()) {
        cout << temp2.top() << " ";
        temp2.pop();
    }
    cout << endl;
}

int main() {
    Swapping();
    return 0;
}
