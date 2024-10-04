#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> candies;
    candies.push(100);
    candies.push(20);
    candies.push(165);
    candies.push(13);


    // cout <<candies.top();
    while(!candies.empty()){
        cout <<candies.top()<<"  ";
        candies.pop();
    }

}