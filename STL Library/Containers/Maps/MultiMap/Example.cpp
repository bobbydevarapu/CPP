#include<bits/stdc++.h>
using namespace std;
void MultiMap(){
  map<int, char> mp;
  mp.insert({2,'A'});
  mp.insert({1,'B'});
  mp.insert({2,'C'});
  mp.insert({3,'C'});
  mp.insert({1,'B'});
  mp.insert({2,'A'});
  cout<<"Map is :"<<endl;
  for(auto i:mp){
    cout<<i.first<<"--> "<<i.second<<endl;
  }
  cout<<"Equal range Elements are :"<<endl;
  auto it=mp.equal_range(2);
  for(auto i=it.first;i!=it.second;i++){
    cout<<i->first<<"--> "<<i->second<<endl; //we can use the (*it) or (i->) to access the value not (.)
  }
}
int main(){
  MultiMap();
  return 0;
}

//It takes unique and Ascending order of keys