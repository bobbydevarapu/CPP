#include<bits/stdc++.h>
using namespace std;
void List(){
  list<int>l={0};
  l.push_back(1);
  l.push_back(2);
  l.push_back(3);
  l.push_front(-1);
  cout<<" list is : ";
  for(auto i :l){
    cout<<i<<" ";
  }
}

int main(){
  List();
  return 0;
}