#include<bits/stdc++.h>
using namespace std;
void Vector(){
  vector<int>v1(5); //It fill automatically with 0's
  v1.push_back(10);
  v1.push_back(20);
  v1.push_back(30);
  v1.push_back(40);
  cout<<"vector1 is :";
  for(auto i: v1){
    cout<<i<<" ";
  }
  vector<int>v2(5,9) ;//It fill automatically with 10's
  v2.push_back(10);
  v2.push_back(20);
  v2.push_back(30);
  v2.push_back(40);
  cout<<"\nvector2 is :";
  for(auto i: v2){
    cout<<i<<" ";
  }

}
int main(){
  Vector();
  return 0;
}