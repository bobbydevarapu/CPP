#include<bits/stdc++.h>
using namespace std;
void Pattren5(int n){
cout<<endl;
  for(int i=0;i<n;i++){
    for(int j=0;j<n-i;j++){
      cout<<"* ";
    }
    cout<<endl;
  }
}
int main(){
  int n;
  cout<<endl;
  cout<<"Enter n:";
  cin>>n;
  Pattren5(n);
  return 0;
}