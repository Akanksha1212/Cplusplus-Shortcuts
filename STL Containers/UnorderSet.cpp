#include<bits/stdc++.h>
using namespace std;
void display(unordered_set<int> unset)
{
     for(auto x: unset)
     {
          cout<<x<<" ";
     }
     cout<<"\n";
}
int main()
{
  unordered_set<int> us;
  us.insert(10); // 10
  us.insert(23); // 23 10 
  us.insert(15); // 23 15 10 
  us.insert(11); // 11 23 15 10
  us.insert(44); // 10 15 23 44 11 
  display(us);
  us.erase(15); 
  display(us); // 10 23 44 11
  return 0;
}
