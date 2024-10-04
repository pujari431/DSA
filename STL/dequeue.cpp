#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> first;
    deque<int> second(first);  // copying first deque to second deque
    int arr[] = {1,2,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[1]);
    cout << "No of elements in the array is"<<n<<" "<<endl;
    deque<int> third(arr,arr+n);

    deque.push_front(20);
    deque.push_back(143);
    deque.pop_front();
    
    // printing deque
    
}