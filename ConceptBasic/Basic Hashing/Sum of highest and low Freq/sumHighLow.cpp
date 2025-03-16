#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumHighestAndLowestFrequency(vector<int>& nums) {
        unordered_map<int, int> freq;
        
        for (int num : nums) {
            freq[num]++;
        }

        int maxFreq = 0, minFreq = INT_MAX;

        for (auto& p : freq) {
            maxFreq = max(maxFreq, p.second);
            minFreq = min(minFreq, p.second);
        }

        return maxFreq + minFreq;
    }
};

int main() {
    Solution sol;
    int n;
    
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Sum of highest and lowest frequency: " << sol.sumHighestAndLowestFrequency(nums) << endl;
    return 0;
}
