#include<bits/stdc++.h>
using namespace std;
void display(set<int> st)
{
    for(auto x:st)
    {
         cout<<x<<" ";
    }
    cout <<"\n"; 
}
int main()
{
  // Set stores elements in sorted order so if we initialise it like this it will automatically get sorted
  set<int> s = {1,4,2}; 
  display(s); // 1 2 4
  s.insert(5); // 1 2 4 5
  s.emplace(3); // 1 2 3 4 5
  s.insert(5); // No compilation error but it will not be inserted as 5 is already there in the set
  cout<<s.count(3)<<"\n"; // This returns count of element 3 which is 1
  s.erase(3); // 1 2 4 5 
  cout<<*s.upper_bound(4)<<"\n"; // 5
  cout<<*s.upper_bound(2)<<"\n"; // 4
  cout<<*s.upper_bound(1)<<"\n"; // 2
  cout<<*s.lower_bound(1)<<"\n"; // 1
  cout<<*s.lower_bound(4)<<"\n"; // 4
  display(s);
  return 0;
}
