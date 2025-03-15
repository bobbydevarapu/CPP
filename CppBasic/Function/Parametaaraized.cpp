#include<bits/stdc++.h>
using namespace std;
int Parameterized(int x){
  return x*x;
}
int main(){
  int n;
  cout<<"Enter n:";
  cin>>n;
  cout<<"The value of n is :"<<Parameterized(n);
  return 0;
}