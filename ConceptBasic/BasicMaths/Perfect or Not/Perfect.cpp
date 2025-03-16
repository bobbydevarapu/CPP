#include<bits/stdc++.h>
using namespace std;
bool PerfectNumber(int n){
  if(n<=1) return false;
  int sum=1;
  for(int i=2;i*i<=n;i++){
    if(n%i==0){
      sum+=i;
      if(i!=n/i) sum+=n/i;
    }
  }
  return sum==n;
}
int main(){
  int n;
  cout<<"Enter n: ";
  cin>>n;
  if(PerfectNumber(n)) cout<<n<<" is a perfect number";
  else cout<<n<<" is not a perfect number";
  return 0;
}