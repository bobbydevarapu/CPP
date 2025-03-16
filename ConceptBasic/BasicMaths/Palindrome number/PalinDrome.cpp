#include<bits/stdc++.h>
using namespace std;
bool Palindrome(int n){
  int rev=0,dup=n;
  while(n>0){
    int lastdigit=n%10;
    rev=rev*10+lastdigit;
    n/=10;
  }
  if(dup==rev) return true;
  return false;
}
int main(){
  int n;
  cout<<"Enter n: ";
  cin>>n;
  if(Palindrome(n))cout<<"palindrome: "<<n;
  else cout<<"Not palindrome: "<<n;
  return 0;
}