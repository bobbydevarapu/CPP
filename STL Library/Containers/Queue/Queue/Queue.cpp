#include <bits/stdc++.h>
using namespace std;
void Queue()
{
  queue<int> q;
  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);
  q.push(5);
  cout<<"Queue is: ";
  while (!q.empty())
  {
    cout << q.front() <<" ";
    q.pop();
  }
}
int main()
{
  Queue();
  return 0;
}

//MAX Heap example--> means it stores a max value at top of Queue.