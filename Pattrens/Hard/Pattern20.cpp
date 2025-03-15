#include<bits/stdc++.h>
using namespace std;
class Solution {
  private:
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
     void Upper(int n) {
         for(int i = 1; i < n; i++) {
             for(int j = 1; j <= n - i; j++) {
                 cout << "*";
             }
             for(int j = 1; j <=(2 * i); j++) {
                 cout << " ";
             }
             for(int j = 1; j <= n - i; j++) {
                 cout << "*";
             }
             cout << endl;
         }
     }
 public:
     void pattern20(int n) {
         Lower(n);
         Upper(n);
     }
 };
int main(){
  int n;
  cout<<"Enter n:";
  cin>>n;
  Solution obj;
  obj.pattern20(n);
  return 0;
}
