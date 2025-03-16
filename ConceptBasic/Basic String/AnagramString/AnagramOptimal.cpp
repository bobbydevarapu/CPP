#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool anagramStrings(string s, string t) {
        if (s.size() != t.size()) return false; // Step 1: Check length
        
        vector<int> freq(256, 0); // Step 2: Frequency array for ASCII
        
        for (int i = 0; i < s.size(); i++) { // Step 3: Count frequencies
            freq[s[i]]++;  // Increase for `s`
            freq[t[i]]--;  // Decrease for `t`
        }
        
        for (int i = 0; i < 256; i++) { // Step 4: Check if all counts are zero
            if (freq[i] != 0) return false;
        }
        
        return true; // If all are zero, it's an anagram
    }
};

int main() {
    Solution sol;
    string s = "listen", t = "silent";
    cout << (sol.anagramStrings(s, t) ? "Anagram" : "Not Anagram") << endl;
    return 0;
}
