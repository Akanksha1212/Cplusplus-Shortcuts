#include<bits/stdc++.h>
using namespace std;
void display(vector<int> v)
{
     for(auto x:v)
     {
          cout<<x<<" ";
     }
     cout<<"\n";
}
int main()
{
  vector<int> v ={2,8,4,11,6,7};
  // push_back is used to push elements in the vector
  v.push_back(5); // {2,8,4,11,6,7,5}
  cout<<v.back()<<"\n"; //5
  // pop_back pops the last element from the vector
  v.pop_back(); //{2,8,4,11,6,7}
  cout<<v.front()<<"\n"; //2
  sort(v.begin(),v.end()); //{2,4,6,7,8,11}
  reverse(v.begin(),v.end()); //{11,8,7,6,4,2}
  /* insert() is used to insert element at a specific position which 
     is done using interators */
  v.insert(v.begin(),5); // {5,11,8,7,6,4,2}
  v.insert(v.begin()+1,3); // {5,3,11,8,7,6,4,2}
  v.insert(v.end(),10); // {5,3,11,8,7,6,4,2,10}
  v.insert(v.end()-2,66); //{5,3,11,8,7,6,4,66,2,10}
  /* insert() can be overloaded by third argument count which defines
  how many times the element is to be inserted before the pointed position.*/
  v.insert(v.begin(),2,12);
  display(v); //{12,12,5,3,11,8,7,6,4,66,2,10}
  vector<int> v2 = { 100,20};
  v2.insert(v2.begin(),v.begin(), v.end());
  // This inserts all the elements of vector v in starting of vector v2
  display(v2); // {12,12,5,3,11,8,7,6,4,66,2,10,100,20}
  v2.erase(v2.begin(),v2.end()-5); 
  display(v2);// {66,2,10,100,20}
  cout<<v2.size()<<"\n"; // 5
  cout<<v2.at(2)<<"\n"; //10
  return 0;
}
