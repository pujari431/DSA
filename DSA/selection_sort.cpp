#include<iostream>
using namespace std;

// sorting function 
void selection_sort(int arr[], int n) {
    int mini;
    int temp;
    // Outer loop
    for (int i = 0; i < n - 1; i++) {
        mini = i; // we are assuming that this is minimum
        for (int j = i + 1; j < n; j++) { // Fix: The loop condition should be j < n
            if (arr[j] < arr[mini]) {
                mini = j;
            }
        }
        temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}

int main(){
    int n;
    cout <<"Enter the size of the array"<<endl;
    cin >>n;
    int arr[n];
    // Taking values for array
    cout <<"Enter the values to the array";
    for(int i=0;i<n;i++){
        cin >>arr[i];
    }
    // Printing values before sorting
    cout <<" Values in array before sorting"<<endl;
     for(int i=0;i<n;i++){
        cout <<arr[i]<<" ";
    }
    selection_sort(arr,n); // Calling sorting function
    cout <<" Values in array after sorting"<<endl;
     for(int i=0;i<n;i++){
        cout <<arr[i]<<" ";
    }


}