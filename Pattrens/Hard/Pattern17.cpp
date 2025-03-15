#include<bits/stdc++.h>
using namespace std;
  void pattern17(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        
        char ch = 'A';
        for(int j = 0; j < (2 * i + 1); j++) {
            cout << ch;
            if (j < i) ch++;  
            else ch--; 
        }
        
        cout << endl;
    }
}
int main(){
  int n;
  cout<<"Enter n:";
  cin>>n;
  pattern17(n);
  return 0;
}