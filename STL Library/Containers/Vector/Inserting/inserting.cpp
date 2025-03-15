#include <bits/stdc++.h>
using namespace std;
void Inserting(){
  vector<int> v = {10, 30};
  v.insert(v.begin() + 1, 20);
  cout<<"20 is inserted : ";
  for (int i : v)
  {
    cout << i << " ";
  }
}
int main()
{
  Inserting();
  return 0;
}