#include<bits/stdc++.h>
using namespace std;
bool Rotate(string s,string goal){
  if(s.size()!=goal.size()) return false;
  return (s+s).find(goal)!=string::npos;
}
int main(){
  string s,goal;
  cout<<"Enter s: ";
  cin>>s;
  cout<<"Enter goal: ";
  cin>>goal;
  if(Rotate(s,goal)) cout<<"Yes";
  else cout<<"No";
  return 0;
}