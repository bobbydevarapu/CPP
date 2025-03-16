#include<bits/stdc++.h>
using namespace std;
class solution{
  public:
  int MostFreqOccur(vector<int>& nums) {
    unordered_map<int,int>freq;
    int maxcnt = 0, ele = INT_MAX;
          for (int num : nums) {
              freq[num]++;
              if (freq[num] > maxcnt || (freq[num] == maxcnt && num < ele)) {
                  maxcnt = freq[num];
                  ele = num;
              }
          }
          return ele;
  }
};
int main(){
  int n;
  cout<<"Enter n: ";
  cin>>n;
  vector<int>arr(n);
  cout<<"Enter elements :";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  solution obj;
  cout<<"Most frequent element is: "<<obj.MostFreqOccur(arr)<<endl;
  return 0;
}