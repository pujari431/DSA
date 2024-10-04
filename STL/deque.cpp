#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int> dq;
    dq.push_front(12);
    dq.push_front(5);
    dq.push_front(18);
    cout <<dq.back()<<endl;
     cout<<dq.size()<<endl;;
    for(auto it : dq){
        cout << it<<" "<<endl;
    }
}