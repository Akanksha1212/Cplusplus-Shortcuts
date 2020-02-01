#include<bits/stdc++.h>
using namespace std;
void display(stack<int> st)
{
    stack<int> p = st; 
    while (!p.empty()) 
    { 
        cout <<p.top()<<" "; 
        p.pop(); 
    } 
    cout <<"\n"; 
}
int main()
{
  stack<int> s;
  s.push(2); // 2 
  s.push(4); // 4 2 top=4
  s.push(1); // 1 4 2 top=1
  display(s);
  s.pop(); // 4 2
  cout<<s.top()<<"\n"; // 4
  stack<int> s1;
  s1.push(9);
  s1.push(67);
  swap(s,s1);
  display(s); // s now has 67 9
  return 0;
}
