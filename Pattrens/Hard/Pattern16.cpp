#include<bits/stdc++.h>
using namespace std;
void Pattern16(int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++)
    {
      cout<<char('A'+ i )<<" ";
    }
    cout<<endl;
  }
}
int main(){
  int n;
  cout<<"Enter n:";
  cin>>n;
  Pattern16(n);
  return 0;
}