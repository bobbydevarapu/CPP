#include<bits/stdc++.h>
using namespace std;
void GreaterInt(){
  priority_queue<int, vector<int> ,greater<int>>pq;
  pq.push(3);
  pq.push(1);
  pq.push(2);
  pq.push(4);
  cout<<"Elements are: ";
  while(!pq.empty()){
    cout<<pq.top()<<" ";
    pq.pop();
  }
}
int main(){
  GreaterInt();
  return 0;
}

//Min Heap example--> means it stores a min value at top of Queue.