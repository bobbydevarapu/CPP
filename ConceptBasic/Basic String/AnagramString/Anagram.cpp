#include<bits/stdc++.h>
using namespace std;
bool Anagram(string s,string t){
  sort(s.begin(),s.end());
  sort(t.begin(),t.end());
  return s==t;
}
int main(){
  string s,t;
  cout<<"Enter s: " ;
  cin>>s;
  cout<<"Enter t: " ;
  cin>>t;
  if(Anagram(s,t))
  cout<<"Anagram";
  else
  cout<<"Not Anagram";
  return 0;
}