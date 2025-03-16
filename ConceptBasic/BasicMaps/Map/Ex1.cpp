#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> marks;
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    
    // Taking input from user
    for (int i = 0; i < n; i++) {
        string name;
        int score;
        cout << "Enter name and marks: ";
        cin >> name >> score;
        marks[name] = score;
    }

    // Printing stored values
    cout << "\nStudent Marks:\n";
    for (auto& it : marks) {
        cout << it.first << " : " << it.second << endl;
    }

    return 0;
}
