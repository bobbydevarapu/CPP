#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<char> frequencySort(string& s) {
        unordered_map<char, int> freq;

        // Count the frequency of each character
        for (char ch : s) {
            freq[ch]++;
        }

        // Store unique characters
        vector<char> chars;
        for (auto &it : freq) {
            chars.push_back(it.first);
        }

        // Sort based on frequency (high to low), and alphabetically if equal
        sort(chars.begin(), chars.end(), [&](char a, char b) {
            if (freq[a] != freq[b])
                return freq[a] > freq[b];  // Higher frequency first
            return a < b;  // If frequency is same, sort alphabetically
        });

        return chars;
    }
};

int main() {
    Solution sol;
    string s;
    cout << "Enter the string: ";
    cin >> s;
    
    vector<char> result = sol.frequencySort(s);
    
    cout << "Sorted characters by frequency: ";
    for (char ch : result) {
        cout << ch << " ";
    }
    cout << endl;

    return 0;
}
