#include<bits/stdc++.h>
using namespace std;
void Access(){
  list<int>lst={1,2,3,4,5};
  cout<<"List is: ";
  for(auto i: lst){
    cout<<i<<" ";
  }
  cout<<endl;
  cout<<"Front is: "<<lst.front();
}

int main(){
  Access();
  return 0;
}