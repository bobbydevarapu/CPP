#include<bits/stdc++.h>
using namespace std;
void StackOperation(){
  stack<int>st;
  st.push(10);
  st.push(20);
  st.push(30);
  cout<<"Stack elements are: ";
  while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
    }
}

int main(){
  StackOperation();
  return 0;
}