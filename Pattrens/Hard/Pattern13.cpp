#include<bits/stdc++.h>
using namespace std;
void Pattern13(int n){
  int num=1;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      cout<<num<<" ";
      num++;
    }
    cout<<endl;
  }
}
int main(){
  int n;
  cout<<"Enter n:";
  cin>>n;
  Pattern13(n);
  return 0;
}