#include<iostream>
using namespace std;


void updatedvalue(int arr[],int id,int num){
    arr[id] = num;
}

void arraysize(int arr[],int n){
    cout <<endl<<"The size of array out of main is" << sizeof(arr);  // Here you can see there will be printed only 8 bytes coz it only stores the base address
}

int main(){
    int n;
    cout <<"Enter the size of the array";
    cin >> n;
    int arr[n];
    // Taking input from the user
    cout <<"Enter the elements to the array   ";
    for(int i=0;i<n;i++){
        cin >>arr[i];
    }

    // I want to update a value from the user
    int id;
    cout <<"Enter the id of the number to be updated  ";
    cin >> id;
    int num ;
    cout <<"Enter the number that you want to update with";
    cin >>num;

    updatedvalue(arr,id,num);
     // Giving output to the user
    cout <<" Array elements are   "<<endl;
    for(int i=0;i<n;i++){
        cout <<arr[i]<<" ";
    }

    arraysize(arr,n);
    cout <<endl<<"Size of the array is "<<sizeof(arr)<<endl; 
}