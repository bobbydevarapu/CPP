#include <bits/stdc++.h>
using namespace std;

void Iterator(){
  vector<int> v = {10, 20, 30};
  cout<<"Vector is :";
  for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
  {
    cout << *it << " ";
  }
}

int main()
{
 Iterator();
  return 0;
}