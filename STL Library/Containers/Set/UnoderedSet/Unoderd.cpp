#include<bits/stdc++.h>
using namespace std;
void UnoderedSet(int n){
  unordered_set<int>s;
  s.insert(1);
  s.insert(2);
  s.insert(3);
  s.emplace(4);
  s.emplace(5);
  cout<<"Unorderedset Elements are: ";
  for(auto i :s){
    cout<<i<<" ";
  }
}
int main(){
  UnoderedSet(5);
  return 0;
}