#include<bits/stdc++.h>
using namespace std;
void display(priority_queue<int> p)
{
    priority_queue <int> pq = p; 
    while (!pq.empty()) 
    { 
        cout <<pq.top()<<" "; 
        pq.pop(); 
    } 
    cout << '\n'; 
}
void displayStr(priority_queue<string> s)
{
    priority_queue<string>ss = s; 
    while (!ss.empty()) 
    { 
        cout <<ss.top()<<" "; 
        ss.pop(); 
    } 
    cout << '\n'; 
}
int main()
{
  priority_queue<int> pq;
  pq.push(20); // inserts 20 to pq
  display(pq); // 20
  pq.push(10); // inserts 10 to pq top = 20
  display(pq); // 20 10
  pq.push(40); // inserts 40 and new top = 40(maximum element)
  display(pq); // 40 20 10
  pq.push(15); // inserts 15 top = 40
  display(pq); // 40 20 15 10
  pq.pop();
  display(pq); // 20 15 10
  pq.emplace(50); // emplace() is also used to insert element in priority_queue
  display(pq); //50 20 15 10
  /* In push() an object is craeted and then inserted while
     in emplace() obkect is created in inplace hence saves unnecessary space */
  priority_queue<int> pq1;
  pq1.push(4);
  pq1.push(5);
  swap(pq,pq1);
  display(pq); // pq now has 5 4 
  priority_queue<string> st;
  // In string priority_queue top will be lexicographically greater
  st.push("a"); // a
  st.push("vb"); // vb a
  st.push("b"); // vb b a 
  st.push("aa"); // vb b aa a
  st.push("cc"); // vb cc b aa a
  st.pop(); // cc b aa a
  displayStr(st);
  return 0;
}
