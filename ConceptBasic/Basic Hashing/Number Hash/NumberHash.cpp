#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Define hash table to store the frequency of numbers
    int hashTable[100] = {0}; // Assuming numbers are in range 0-99

    // Hashing: Storing count of each number
    for (int i = 0; i < n; i++) {
        hashTable[arr[i]]++;
    }

    // Display the hash table (non-zero values)
    cout << "Hash Table (Frequency of Numbers):\n";
    for (int i = 0; i < 100; i++) {
        if (hashTable[i] > 0) {
            cout << "Number " << i << " appears " << hashTable[i] << " times\n";
        }
    }

    return 0;
}
