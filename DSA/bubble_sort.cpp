#include<iostream>
using namespace std;
void bubble_sort(int arr[],int n){
int temp;
    for(int i = n-1;i>=0;i--){
        for(int j =0;j<=i;j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
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
    bubble_sort(arr,n); // Calling sorting function
    cout <<endl<<" Values in array after sorting"<<endl;
     for(int i=0;i<n;i++){
        cout <<arr[i]<<" ";
    }


}