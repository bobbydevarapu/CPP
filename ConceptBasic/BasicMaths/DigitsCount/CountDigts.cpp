#include<bits/stdc++.h>
using namespace std;
int CountDigits(int n){
  int cnt=0;
  while(n>0){
    n/=10;
    cnt+=1;
  }
  return cnt;
}
int main(){
  int n;
  cout<<"Enter n: ";
  cin>>n;
  cout<<"Number of digits: "<<CountDigits(n)<<endl;
  return 0;
}