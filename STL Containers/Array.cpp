#include<bits/stdc++.h>
using namespace std;
void display(array<int,3> a)
{
     for(auto x:a)
     {
          cout<<x<<" ";
     }
     cout<<"\n";
}
void displayMult(array<array<int,3>,3> a)
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout <<endl;
    }
}
int main()
{
  // Syntax array<object_type, array_size> array_name;
  array<int, 3> arr = {1,4,2};
  cout<<arr.at(0)<<"\n"; // 1 
  cout<<arr.front()<<"\n"; // 1 
  cout<<arr.back()<<"\n"; // 2 
  sort(arr.begin(),arr.end()); // {1,2,4}
  display(arr);
  // fill() is used to fill the array with given element
  arr.fill(1); // {1,1,1}
  array<array<int, 3>, 3> arr1  {{{1,2,3},{4,5,6},{7,8,9}}};
  displayMult(arr1);
  /* 
     1	2	3	
     4	5	6	
     7	8	9
  */
  array<int,3> arr2={5,6,9};
  // For using swap() function size of both the arrays should be same
  arr.swap(arr2);
  display(arr); // arr = {5,6,9} arr2 = {1,2,4}
  return 0;
}
