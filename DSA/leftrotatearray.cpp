#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[6] = {12,31,54,21,12,10};
    for(auto it : arr){
        cout << it <<" ";
    }
    int n = sizeof(arr)/sizeof(arr[0]);

    // To rotate array by one place left
    int temp = arr[0]; //  storing first index in temp;
    // Using for loop 
    for(int i=1;i<n;i++){
        arr[i-1] = arr[i];
    }
    arr[5] = temp;
    cout <<endl;

    //Printing array 
    for(auto it : arr){
        cout << it <<" ";
    }
}