#include<iostream>
using namespace std;

void insertion_sort(int arr[],int n ){
        int j;
        int temp;
    for(int i=0;i<n;i++){
        j=i;
        while(j>0 && arr[j]<arr[j-1]){
            temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
}
int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin >>n;
    int arr[n];
    cout <<"Enter the elements to the array"<<endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    //
    // cout <<"Array elements before sorting";
    // for(int i=0;i<n;i++){
    //     cout <<arr[i]<<" ";
    
    //     }
    insertion_sort(arr,n);
    // Printing the elements 
    cout <<"Array elements after sorting"<<endl;
    for(int j=0;j<n;j++){
        cout << arr[j]<<" ";
    }
}