#include<bits/stdc++.h>
using namespace std;
void SortFunc(){
  //In arrays
  int a[5]={1,3,2,5,4};
  sort(a,a+5);
  cout<<"Sorted Array is: ";
  for(auto i:a){
    cout<<i<<" ";
  }
  cout<<endl;

  //In Vectors
  vector<int>v={1,4,2,3,5};
  sort(v.begin(),v.end());
  cout<<"Sorted Vector is: ";
  for(auto i:v){
    cout<<i<<" ";
  }
}
int main(){
  SortFunc();
  return 0;
}