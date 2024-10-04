#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(13);

    v.push_back(12);
    v.push_back(19);
    v.push_back(24);
    vector<int>::iterator it = v.begin();
    for(int i=0;i<v.size();i++){
    it++;
    cout <<*(it)<<" "<<endl; 
    }
//    vector<pair<int,int>> vp;
//    vp.push_back({13,22});
//    vp.emplace_back(23,13);
   
}