#include<bits/stdc++.h>
using namespace std;
void display(list<int> ls)
{
     for(auto x:ls)
     {
          cout<<x<<" ";
     }
     cout<<"\n";
}
void displayStr(list<string> ls)
{
     for(auto x:ls)
     {
          cout<<x<<" ";
     }
     cout<<"\n";
}
int main()
{
  list<int> ls;
  ls={1,6,3};
  list<string> list2 = {"a", "abb", "aa","aaa"};
  ls.insert(ls.begin(),4); // {4,1,6,3}
  ls.insert(ls.end(),9); // {4,1,6,3,9}
  // insert() function can be overloaded by using count parameter
  // Here 2 denotes number of times 10 will be inserted in the beginning of the list
  ls.insert(ls.begin(),2,10); // {10,10,4,1,6,3,9}
  ls.pop_front(); // {10,4,1,6,3,9}
  ls.pop_back(); // {10,4,1,6,3}
  ls.push_back(7); // {10,4,1,6,3,7}
  ls.push_front(2); // {2,10,4,1,6,3,7}
  ls.sort(); // {1,2,3,4,6,7,10}
  ls.reverse(); 
  display(ls); // {10,7,6,4,3,2,1}
  list2.sort(); 
  displayStr(list2); // {a,aa,aaa,abb}
  return 0;
}
