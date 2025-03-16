#include<bits/stdc++.h>
using namespace std;
void ReverseString(vector<string> &s){
  int l=0;
  int r=s.size()-1;
  while(l<r){
    swap(s[l],s[r]);
    l++,r--;
  }
}

int main(){
  int n;
  cout<<"Enter n: ";
  cin>>n;
  vector<string>s(n);
  cout<<"Enter Strings: ";
  for(int i=0;i<n;i++){
    cin>>s[i];
    }
    ReverseString(s);
    for(int i=0;i<n;i++){
      cout<<s[i]<<" ";
    }
    return 0;
}