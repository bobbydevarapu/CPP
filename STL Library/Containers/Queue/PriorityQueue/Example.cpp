#include<bits/stdc++.h>
using namespace std;
void PriorityQueue(){
  priority_queue<int>pq;
  pq.push(4);
  pq.push(3);
  pq.push(2);
  pq.push(5);
  pq.push(1);
  cout<<"Elements are: ";
  while(!pq.empty()){
    cout<<pq.top()<<" ";
    pq.pop();
  }
}
int main(){
  PriorityQueue();
  return 0;
}