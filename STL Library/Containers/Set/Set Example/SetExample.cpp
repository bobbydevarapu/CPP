#include<bits/stdc++.h>
using namespace std;
void SetExample(){
  set<int>s;
  s.insert(10);
  s.insert(20);
  s.insert(10);
  s.insert(10);
  s.insert(20);
  s.insert(30);
  s.insert(50);
  s.insert(40);
  cout<<"Elements are: ";
for(auto i :s){
  cout<<i<< " ";
  }
}
int main(){
  SetExample();
  return 0;
}


//It store a unique element in a set
//It prints an elements in ascending
//It is implemented as a binary search tree
