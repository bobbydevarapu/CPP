#include<bits/stdc++.h>
using namespace std;
void Accumulate(){
  int a[5]={10,30,50,40,20};
  cout<<"Accumulate is: "<<accumulate(a,a+5,10);
}
int main(){
  Accumulate();
  return 0;
}

//Accumulate gives an sum of array elements