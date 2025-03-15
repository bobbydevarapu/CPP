#include<bits/stdc++.h>
using namespace std;
void Pattern12(int n){
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      cout<<j;
    }
    for(int j=1;j<(2*n)-(2*i);j++){
      cout<<" ";
    }
    for(int j=i;j>=1;j--){
      cout<<j;
    }
    cout<<endl;
  }
}
int main(){
  int n;
  cout<<"Enter n:";
  cin>>n;
  Pattern12(n);
  return 0;
}