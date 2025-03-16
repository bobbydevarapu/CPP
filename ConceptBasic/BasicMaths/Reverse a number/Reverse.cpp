#include<bits/stdc++.h>
using namespace std;
int ReverseNum(int n){
  int rev=0;
  int dup=n;
  while(n>0){
    int lastdigit=n%10;
    rev=rev*10+lastdigit;
    n/=10;
  }
  return rev;
}
int main(){
  int n;
  cout<<"Enter n: ";
  cin>>n;
  cout<<"Reverse is: "<<ReverseNum(n)<<endl;
  return 0;
}