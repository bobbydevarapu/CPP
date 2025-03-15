#include<bits/stdc++.h>
using namespace std;
void pattren(int n){
  cout<<endl;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      cout<<j<<" ";
    }
    cout<<endl;
  }
}
int main(){
  int n;
  cout<<endl;
  cout<<"Enter n:";
  cin>>n;
  pattren(n);
  return 0;
}