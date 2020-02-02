#include<bits/stdc++.h>
using namespace std;
void display(unordered_multiset<int> umset)
{
     for(auto x: umset)
     {
          cout<<x<<" ";
     }
     cout<<"\n";
}
int main()
{
  unordered_multiset<int> s;
  s.insert(10); // 10
  s.insert(23); // 23 10 
  s.insert(15); // 23 15 10 
  s.insert(11); // 11 23 15 10
  s.insert(23); // 10 15 23 23 11 
  display(s);
  s.erase(23); 
  display(s); // 10 15 11
  return 0;
}
