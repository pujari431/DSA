#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(12);

    // Printing all values in queue
    while (!q.empty()) {
        cout << q.front() << " " << endl;
        q.pop();
    }

    return 0;
}
