#include<bits/stdc++.h>
using namespace std;
int main(){

    priority_queue<string> pq;
    pq.push("Baldev");
    pq.push("Balaji");
    pq.push("Prudhvitha Devi");
    pq.push("We both are couple");
    cout << pq.top()<<endl;

    // If we want to store minimum element at the top means
    priority_queue<int,vector<int>,greater<int>> pq1;
    pq1.push(123);
    pq1.push(1);
    pq1.push(3);
    cout << pq1.top()<<endl;
    
}