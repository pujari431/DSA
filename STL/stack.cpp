#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(){

    stack<string> libraries;
    libraries.push("Physics");
    libraries.push("Chemistry");
    libraries.push("Computer Science");
    libraries.push("Maths");
    libraries.pop();


    // printing stack elements
    while(!libraries.empty()){
        cout <<libraries.top()<<"  ";
        libraries.pop();
    }
    cout <<endl;
}