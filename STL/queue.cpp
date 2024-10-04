#include<iostream>
#include<string>
#include<queue>
using namespace std;
int main(){
    queue<string> basket;
    basket.push("Fruits");
    basket.push("Biscuits");
    basket.push("Drinks");

    //cout <<basket.front()<<endl;   // top element will be printed

    basket.pop();
    while(!basket.empty()){
       cout << basket.front()<<" ";
       basket.pop();
    }
    
    

    cout <<endl;
}