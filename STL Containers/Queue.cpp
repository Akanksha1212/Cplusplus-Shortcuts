#include<bits/stdc++.h>
using namespace std;

int main()
{
  queue<int> q;
  q.push(2); // front = 2 back = 2
  q.push(6); // front = 2 back = 6 
  q.pop(); // 2 will be removed 
  cout<<q.front()<<"\n"; // 6 
  queue<int> q1;
  q1.push(3); 
  swap(q,q1); // Elements of q and q1 will be swapped
  cout<<q.front()<<"\n"; // front of q = 3
  return 0;
}
