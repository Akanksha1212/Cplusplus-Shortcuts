#include<bits/stdc++.h>
using namespace std;
void display(multimap<int,int> mp)
{
     multimap <int, int> :: iterator it;
     for(it=mp.begin();it!=mp.end();it++)
     {
          cout<<it->first<<" "<<it->second<<"\n";
     }
     cout<<"\n";
}
void displayStr(multimap<int,string> mp)
{
     multimap <int, string> :: iterator it;
     for(it=mp.begin();it!=mp.end();it++)
     {
          cout<<it->first<<" "<<it->second<<"\n";
     }
     cout<<"\n";
}
int main()
{
  multimap<int, string> mmp;
  multimap<int, int> mmp1;
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
     1 1
     1 2
     2 2
     4 3
  */
  cout<<mmp1.count(1)<<"\n"; // 2
  mmp1.erase(1);
  display(mmp1);
  /*
     2 2
     4 3
  */
  // assigning all elements of multimap1 to multimap2
  multimap <int, int> mmp2(mmp1.begin(),mmp1.end());
  display(mmp2);
  /*
     2 2
     4 3
  */
  return 0;
}
