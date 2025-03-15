#include<bits/stdc++.h>
using namespace std;
void explainPair(){
  cout<<"=====Pair Understanding====="<<"\n";
  pair<int,int>p1={10,20};
  cout<<p1.first<<" "<<p1.second;
  cout<<endl;

  pair<int,char>p2={65,'A'};
  cout<<p2.first<<" -> "<<p2.second;
  cout<<endl;
  pair<pair<int ,char>,int>p3={{66,'B'},10};
  cout<<p3.first.first<<" -> "<<p3.first.second<<"  "<<p3.second;
}
int main(){
  explainPair();
  return 0;
}