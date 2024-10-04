#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

void updatearray(array<int,6> &arr,int ind,int value){  // Here we have to pass the array reference
    arr[ind] = value;
}
void printSTLarray(array<int,6> arr){
    for(int i=0;i<arr.size();i++){
        cout <<arr[i]<<" ";
    }

}

int main(){
    
    // cout <<"Enter the array size"<<endl;
    // cin >>n;
    array<int,143> arr;
    // cout <<"Enter the elements to the array";
    // for(int i=0;i<arr.size();i++){
    //     cin >>arr[i];
    // }
   // arr[3] = 143;   Now it got updated
    // updatearray(arr,3,143);   // After doing this value didn't get updated so we have to pass the reference
    // cout <<"Elements before sorting"<<endl;
    // printSTLarray(arr);
    // sort(arr.begin(),arr.end());
    //  cout <<"Elements after sorting"<<endl;
    
    // printSTLarray(arr);
    // arr.fill(12);
    // for(int i=0;i<arr.size();i++){
    //     cout <<arr[i]<<" ";
    // }
    // int i= 20;
    // cout <<"Element at first index is ";
    // cout <<arr.front()<<endl;
    // cout <<"Element at lastindex is ";
    // cout <<arr.back()<<endl;
    // // To access index at ith index
    // cout <<"Element at ith index is ";
    // cout <<arr.at(i);

    

}