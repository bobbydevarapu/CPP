#include<bits/stdc++.h>
using namespace std;
void Pattren8(int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
      cout<<" ";
    }
    for(int j=0;j<(2*n-1)-(2*i);j++){
      cout<<"*";
    }
    for(int j=0;j<i;j++){
      cout<<" ";
    }
    cout<<endl;
  }
}
int main(){
  cout<<endl;
  int n;
  cout<<"enter n:";
  cin>>n;
  Pattren8(n);
  return 0;
}