#include<bits/stdc++.h>
using namespace std;
void display(deque<int> d)
{
     for(auto x:d)
     {
          cout<<x<<" ";
     }
     cout<<"\n";
}
int main()
{
  deque<int> d;
  d={1,4,2};
  d.push_back(6); // {1,4,2,6}
  d.push_front(3); // {3,1,4,2,6}
  d.pop_back(); // {3,1,4,2}
  d.pop_front(); // {1,4,2}
  deque<int> d1 ={5,67,8,9};
  swap(d1,d); // d1 = {1,4,2} d={5,67,8,9}
  cout<<d.size()<<" "<<d.max_size()<<"\n"; // 4 4611686018427387903
  cout<<d.front()<<" "<<d.back()<<"\n"; // 5 9
  display(d1);
  return 0;
}
