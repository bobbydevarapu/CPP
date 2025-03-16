#include<bits/stdc++.h>
using namespace std;
int Factorial(int n){
  if(n==0) return 1;
  else return n*Factorial(n-1);
}
int main(){
  int n;
  cout<<"Enter n: ";
  cin>>n;
  cout<<"Factorial is: "<<Factorial(n);
  return 0;
}