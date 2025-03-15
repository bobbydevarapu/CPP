#include<bits/stdc++.h>
using namespace std;
void Pattern18(int n){
  for(int i=0;i<n;i++){
    char el='A'+n-1;
    for(char ch=el-i;ch<=el;ch++){
      cout<<ch<<" ";
    }
    cout<<endl;
  }
}
int main(){
  int n;
  cout<<"Enter n:";
  cin>>n;
  Pattern13(n);
  return 0;
}