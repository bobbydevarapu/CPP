#include<bits/stdc++.h>
using namespace std;

int GCD(int a,int b){
  return b==0?a:GCD(b,a%b);
}
int LCM(int n1,int n2){
  return n1*n2/GCD(n1,n2);
}
int main(){
  int n1,n2;
  cout<<"Enter two numbers: ";
  cin>>n1>>n2;
  cout<<"LCM of n1,n2 is: "<<LCM(n1,n2)<<endl;
  return 0;
}