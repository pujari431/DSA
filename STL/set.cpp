#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> st;
    st.insert(21);
    st.insert(2);
    st.insert(1);
    st.insert(1);
    st.insert(1);
    st.insert(1);
    st.insert(1);
    st.insert(10);
   // cout <<st.top()<<endl;
   auto it = st.find(1);
   st.erase(2);
   //st.erase(st.begin(),st.end());
   int cnt = st.count(1);
   cout <<cnt;
  

}