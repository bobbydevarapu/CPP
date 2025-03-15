#include <bits/stdc++.h>
using namespace std;
void Swapping(){
  vector<int> v1 = {1, 2, 3};
  vector<int> v2 = {4, 5, 6};
  cout << "Before swapping:"<<endl;
  cout << "v1: ";
  for (int i : v1)
  {cout << i << " ";}

  cout << endl;
  cout << "v2: ";
  for (int i : v2)
  {cout<<i<<" ";}
  swap(v1, v2);
  cout << "\nAfter swapping:"<<endl;
  cout << "v1: ";
  for (int i : v1)
  {
    cout << i << " ";
  }
  cout << endl;
  
  cout << "v2: ";
  for (int i : v2)
  {
    cout << i << " ";
    }
}

int main()
{
  Swapping();
  return 0;
}