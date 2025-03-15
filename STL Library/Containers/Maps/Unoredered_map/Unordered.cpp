#include<bits/stdc++.h>
using namespace std;
void Unordered_Map(){
  cout<<"==Movie Records=="<<endl;
  unordered_map<int,string>mp;
  mp[2300]="Avatar";
  mp[2301]="Kalki";
  mp[2302]="Puspha";
  mp[2303]="Jailer";
  mp[2304]="Jawan";
  mp[2305]="Doctor Strange";
  for(auto i:mp){
    cout<<i.first<<" --> "<<i.second<<endl;
  }
}
int main(){
  Unordered_Map();
  return 0;
}