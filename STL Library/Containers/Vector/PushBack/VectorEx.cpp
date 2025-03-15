#include<bits/stdc++.h>
using namespace std;
void VectorExample(){
  vector<int>v; //Initializing empty vector
  v.push_back(10); //Insert Elements into vector use "emplace_back or push_back"
  v.push_back(20);
  v.push_back(30);
  v.emplace_back(40);
  cout<<"Size is: "<<v.size()<<endl;
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;
  cout<<"Vector is: ";
  for(auto i:v){
    cout<<i<<" ";
  }
}

int main(){
  VectorExample();
  return 0;
}