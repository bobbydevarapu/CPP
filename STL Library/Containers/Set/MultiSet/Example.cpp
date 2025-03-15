#include<bits/stdc++.h>
using namespace std;
void MultiSet(){
  multiset<int>ms;
  ms.insert(5);
  ms.insert(10);
  ms.insert(15);
  ms.insert(5);
  ms.insert(10);
  ms.insert(15);
  ms.insert(20);
  ms.insert(25);
  ms.insert(25);
  ms.insert(20);
  cout<<"Multiset Elements are: ";
  for (auto i:ms){
    cout<<i<<" ";
  }
  cout<<endl;
  cout<<"Elements are : "<<ms.count(25);
}
int main(){
  MultiSet();
  return 0;
}

//It Takes an duplicate elements and print them in sorted order.
//It takes O(n) time complexity for insertion and search operation.
