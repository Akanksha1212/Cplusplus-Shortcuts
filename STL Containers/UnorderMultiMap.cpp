#include<bits/stdc++.h>
using namespace std;
void display(unordered_multimap<int,int> mp)
{
     unordered_multimap <int, int> :: iterator it;
     for(it=mp.begin();it!=mp.end();it++)
     {
          cout<<it->first<<" "<<it->second<<"\n";
     }
     cout<<"\n";
}
void displayStr(unordered_multimap<int,string> mp)
{
     unordered_multimap <int, string> :: iterator it;
     for(it=mp.begin();it!=mp.end();it++)
     {
          cout<<it->first<<" "<<it->second<<"\n";
     }
     cout<<"\n";
}
int main()
{
  unordered_multimap<int, string> mmp;
  unordered_multimap<int, int> mmp1;
  mmp=
  {   
     {1,"Java"},  
     {2, "C++"},  
     {3, "Python"},  
     {2, "Android"}  
  };
  mmp.insert(pair<int,string>{1,"Dart"});
  displayStr(mmp);
  /*
     1 Java
     1 Dart
     2 C++
     2 Android
     3 Python
  */
  mmp1=
  {
       {1,1},
       {1,2},
       {4,3},
       {2,2}
  };
  display(mmp1);
  /*
     2 2
     4 3
     1 2
     1 1
  */
  cout<<mmp1.count(1)<<"\n"; // 2
  mmp1.erase(1);
  display(mmp1);
  /*
     2 2
     4 3
  */
  // assigning all elements of unordered_multimap1 to unordered_multimap2
  unordered_multimap <int, int> mmp2(mmp1.begin(),mmp1.end());
  display(mmp2);
  /*
     4 3
     2 2
  */
  return 0;
}
