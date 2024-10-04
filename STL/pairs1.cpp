#include<bits/stdc++.h>
using namespace std;
int main(){
    // pair<int,int> p = {10,12};
    // cout << p.first<<endl;
    // cout <<p.second<<endl;
    // // We can create pair in pair
    // pair<int,pair<int,int>> p1 = {1,{13,22}};
    // cout <<p1.first<<endl;
    // cout<<p1.second.first<<" "<<p1.second.second<<endl;
    // Arrays in pairs
    pair<int,int>parr[] = {{2,3},{4,65},{23,54}};
    cout<<parr[1].second<<" "<<parr[2].first<<endl;
    pair <int,string> p = {12,"Balaji"};
    cout<<p.second<<endl;
    pair<int,pair<int,string>> p1 = {12,{123,"Baldev"}};
    cout <<p1.first<<" "<<p1.second.second<<endl;
}