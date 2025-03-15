#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
      void pattern14(int n) {
          for(int i=0;i<n;i++){
              for(char ch='A';ch<='A'+i;ch++){
                  cout<<ch<<" ";
              }
              cout<<endl;
          }
      }
  };
int main(){
  int n;
  cout<<endl;
  cout<<"Enter n:";
  cin>>n;
  Solution obj;
  cout<<endl;
  obj.pattern14(n);
  return 0;
}