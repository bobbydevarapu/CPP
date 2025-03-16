#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int SecondMostFreq(vector<int>& nums) {
        int n = nums.size();
        if (n < 2) return -1;

        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }

        int maxcnt = 0, secondMaxcnt = 0;
        int maxEle = -1, secondEle = -1;

        for (auto it = freq.begin(); it != freq.end(); it++) {
            int num = it->first;
            int cnt = it->second;

            if (cnt > maxcnt) { 
                secondMaxcnt = maxcnt;
                secondEle = maxEle;
                maxcnt = cnt;
                maxEle = num;
            } else if (cnt > secondMaxcnt || (cnt == secondMaxcnt && num < secondEle)) {
                secondMaxcnt = cnt;
                secondEle = num;
            }
        }

        return (secondMaxcnt == 0) ? -1 : secondEle;
    }
};

int main() {
    Solution obj;
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Second Most Frequent Element: " << obj.SecondMostFreq(arr) << endl;
    return 0;
}
