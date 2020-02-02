#include<bits/stdc++.h>
using namespace std;
void display(unordered_map<int,int> mp)
{
     unordered_map <int, int> :: iterator it;
     for(it=mp.begin();it!=mp.end();it++)
     {
          cout<<it->first<<" "<<it->second<<"\n";
     }
     cout<<"\n";
}
void displayStr(unordered_map<string,int> mp)
{
     unordered_map <string, int> :: iterator it;
     for(it=mp.begin();it!=mp.end();it++)
     {
          cout<<it->first<<" "<<it->second<<"\n";
     }
     cout<<"\n";
}
int main()
{
  unordered_map<int, int> mp = {{1,4},{2,6}};
  mp.insert(pair<int,int>(3,5));
  display(mp);
  /*
     3 5
     2 6
     1 4
  */
  unordered_map<string,int> mp1;
  mp1["mango"] = 4;
  mp1["banana"] = 1;
  mp1["apple"] = 3;
  mp1.insert(pair<string,int>("cherry",5));
  displayStr(mp1);
  /*
     cherry 5
     apple 3
     banana 1
     mango 4
  */
  cout<<mp[1]<<"\n"; // 4
  cout<<mp1.at("mango")<<"\n"; // 4
  mp1.erase("apple");
  /*
     cherry 5
     banana 1
     mango 4
  */
  displayStr(mp1);
  return 0;
}
