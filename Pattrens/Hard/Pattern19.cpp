#include<bits/stdc++.h>
using namespace std;
class Solution {
  private:
      void Upper(int n) {
          for(int i = 0; i < n; i++) {
              for(int j = 1; j <= n - i; j++) {
                  cout << "*";
              }
              for(int j = 1; j <= (2 * i); j++) {
                  cout << " ";
              }
              for(int j = 1; j <= n - i; j++) {
                  cout << "*";
              }
              cout << endl;
          }
      }
      
      void Lower(int n) {
          for(int i = 0; i < n; i++) {
              for(int j = 0; j <= i; j++) {
                  cout << "*";
              }
              for(int j = 1; j <= (2 * n - 2) - (2 * i); j++) {
                  cout << " ";
              }
              for(int j = 0; j <= i; j++) {
                  cout << "*";
              }
              cout << endl;
          }
      }
  
  public: 
      void pattern19(int n) {
          Upper(n);
          Lower(n);
      }
  };
int main(){
  int n;
  cout<<"Enter n:";
  cin>>n;
  Solution obj;
  obj.pattern19(n);
  return 0;
}
