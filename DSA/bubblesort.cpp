#include<iostream>
#include<array>
using namespace std;

int main(){
    int n;
    cout <<"Enter the size of the array"<<endl;
    cin >>n;
    int flag = 0;
    int arr[n];
    int temp =0;

    // Inputing elements from the array

    for(int i=0;i<n;i++){
        cin >>arr[i];
    }
    for(int i=0;i<n;i++){
        flag=0;
        cout <<"count"
        for(int j=0;j<n;j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
        if(flag==0){
            break;
        }
    }

    // Printing the array

cout <<endl;
    for(int i=0;i<n;i++){
         cout <<arr[i]<<" "<<endl;
        }
    }

