#include<bits/stdc++.h>
using namespace std;
void Pattern15(int n){
  for (int i=0;i<n;i++){
    for(char ch='A';ch<='A'+(n-i-1);ch++){
      cout<<ch<<" ";
    }
    cout<<endl;
  }
}
int main(){
  int n;
  cout<<"Enter n:";
  cin>>n;
  Pattern15(n);
  return 0;
}