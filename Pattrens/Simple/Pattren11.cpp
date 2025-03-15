#include<bits/stdc++.h>
using namespace std;
class Pattern11
{
private:
void pattern1(int n){
 for(int i=1;i<=n;i++){
   for(int j=1;j<=i;j++){
     cout<<"*";
   }
   cout<<endl;
 }
}
  void pattern2(int n){
   for(int i=0;i<n;i++){
     for(int j=0;j<n-i;j++){
       cout<<"*";
     }
     cout<<endl;
   }
  }
public:
  void pattern11(int n){
   pattern1(n);
   pattern2(n-1);
  }
};
int main(){
  int n;
  cout<<"Enter n:";
  cin>>n;
  Pattern11 p;
  p.pattern11(n);
  return 0;
}