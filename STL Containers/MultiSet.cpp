#include<bits/stdc++.h>
using namespace std;
void display(multiset<int> s)
{
    for(auto x:s)
    {
         cout<<x<<" ";
    }
    cout <<"\n"; 
}
int main()
{
  multiset<int> ms;
  ms.insert(2); // 2
  ms.insert(1); // 1 2 
  ms.insert(2); // 1 2 2
  ms.insert(5); // 1 2 2 5
  ms.insert(3); // 1 2 2 3 5
  cout<<ms.count(2)<<"\n"; // 2 
  cout<<*ms.find(3)<<"\n"; // 3
  cout<<*ms.lower_bound(3)<<"\n"; // 3
  cout<<*ms.upper_bound(3)<<"\n"; // 5
  cout<<*ms.upper_bound(2)<<"\n"; // 3 
  ms.erase(2); // 1 3 5
  display(ms);
  return 0;
}
