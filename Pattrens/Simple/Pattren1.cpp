#include<bits/stdc++.h>
using namespace std;
void pattern1(int n) {
  cout<<"\n";
  for(int i=0;i<n;i++){
    
      for(int j=0;j<n;j++){
        cout<<"* ";
      }
      cout<<endl;
  }
}
int main(){
  cout<<"\n";
  int n;
  cout<<"Enter n: ";
  cin>>n;
  pattern1(n);
  cout<<"\n";
  return 0;
}