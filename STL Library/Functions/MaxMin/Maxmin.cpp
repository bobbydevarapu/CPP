#include <bits/stdc++.h>
using namespace std;
void Maximum(){
  vector<int> v = {1, 5, 3, 9, 7};
  auto it = max_element(v.begin(), v.end());
  cout << "Max Element: " << *it;
  cout<<endl;
}
void Minium(){
  vector<int>v={1, 5, 3, 9, 7};
  auto it=min_element(v.begin(),v.end());
  cout<<"Min Element: "<<*it;
}
int main() {
  Maximum();
  Minium();
  return 0;
}
