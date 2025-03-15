#include <bits/stdc++.h>
using namespace std;
void Erase(){
  vector<int> v = {10, 20, 30};
  v.erase(v.begin() + 0);
  cout<<"10 is Erased : ";
  for (int i : v)
  {
    cout << i << " ";
  }
}
int main()
{
  Erase();
  return 0;
}