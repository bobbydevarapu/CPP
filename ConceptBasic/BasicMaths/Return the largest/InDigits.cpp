#include<bits/stdc++.h>
using namespace std;
int LargestDig(int n){
  int lar=0;
  while(n>0){
    int lastDig=n%10;
    if(lastDig>lar)lar=lastDig;
    n/=10;
  }
  return lar;
}
int main(){
  int n;
  cout<<"Enter n: ";
  cin>>n;
  cout<<"Largest digit is: "<<LargestDig(n);
  return 0;
}