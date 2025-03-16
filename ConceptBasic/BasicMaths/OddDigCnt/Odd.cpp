#include<bits/stdc++.h>
using namespace std;
int OddDigCnt(int n){
  int Odd=0;
  while(n>0){
    int ld=n%10;
    if(ld%2!=0)Odd++;
    n/=10;
  }
  return Odd;
}
int main(){
  int n;
  cout<<"Enter n: ";
  cin>>n;
  cout<<"Number of odd digits in "<<n<<" is "<<OddDigCnt(n)<<endl;
  return 0;
}