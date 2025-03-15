#include<bits/stdc++.h>
using namespace std;
class Solution {
  private:
       private:
      void pattern1(int n) {
          for (int i = 0; i < n; i++) {
              for (int j = 0; j <= i; j++) {
                  cout << "*";
              }
              cout << endl;
          }
      }
  
  
      void pattern2(int n) {
          for (int i=0;i<n-1; i++) {  
              for (int j = 0; j <n-i-1; j++) {  
                  cout << "*";
              }
              cout << endl;
          }
      }
  public:
      void pattern10(int n) {
          pattern1(n);
          pattern2(n);
      }
  };
  int main(){
    int n;cout<<"Enter n:";
    cin>>n;
    Solution s;
    s.pattern10(n);
    return 0;
  }