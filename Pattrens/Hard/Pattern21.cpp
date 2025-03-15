#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
      void pattern21(int n) {
          for (int i = 1; i <= n; i++) {
              for (int j = 1; j <= n; j++) {
                  // Print '*' at boundaries (first row, last row, first column, last column)
                  if (i == 1 || i == n || j == 1 || j == n) {
                      cout << "*";
                  } else {
                      cout << " ";  // Space inside the square
                  }
              }
              cout << endl;
      }
    }
};
int main(){
int n;
cout<<"Enter n:";
cin>>n;
Solution obj;
obj.pattern21(n);
return 0;
}