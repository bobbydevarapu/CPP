#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    // Hash table to store frequency of characters (for all ASCII characters)
    int hashTable[256] = {0};

    // Hashing: Counting frequency of each character
    for (char ch : str) {
        hashTable[ch]++; // Using ASCII values directly
    }

    // Display the hash table (non-zero values)
    cout << "Character Frequencies:\n";
    for (int i = 0; i < 256; i++) {
        if (hashTable[i] > 0) {
            cout << char(i) << " appears " << hashTable[i] << " times\n";
        }
    }
    return 0;
}
