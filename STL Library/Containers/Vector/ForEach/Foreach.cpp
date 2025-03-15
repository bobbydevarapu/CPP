#include <bits/stdc++.h>
using namespace std;

void ForEach(){
  vector<int> v = {10, 20, 30};
  cout<<"ForEach Loop : ";
  for (int i : v)
  {
    cout << i << " ";
  }
}

int main()
{
  ForEach();
  return 0;
}