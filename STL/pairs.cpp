#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<string,int> p = {"Balaji",3};
    cout << p.first<<endl;
    pair<string,pair<int,int>> p1 = {"Baldev",{22,13}};
    cout <<p1.first <<" "<< p1.second.first <<" "<<p1.second.second<<endl;
}