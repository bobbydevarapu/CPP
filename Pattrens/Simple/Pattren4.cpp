#include<bits/stdc++.h>
using namespace std;
void Pattren(int n){
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      cout<<i<<" ";
    }
      cout<<endl;
      }
}
int main(){
  int n;
  cout<<"Enter n:";
  cin>>n;
  Pattren(n);
  return 0;
}