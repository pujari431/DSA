#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={12,3432,542,12,-12,-54,-25345,124};
    cout << "Elements in the array are"<<endl;
    int size = sizeof(arr) / sizeof(arr[0]);
     sort(arr,arr+size);
    for(int i=0;i<size;i++){
        cout << arr[i]<<" "<<endl;
    }
    
}
