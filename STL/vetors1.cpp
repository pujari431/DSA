#include<bits/stdc++.h>
using namespace std;
int main(){
    // vector<int> v; // Declaring the vector
    // v.push_back(1);
    // v.emplace_back(2);
    // Pairs in vectors

    // vector<pair<int,int>> vec;
    // v.push_back({12,324});
    // v.emplace_back({123,132});
    
    // Predefined size of array
    // vector<int> v(5,100);
    // // for(int i=0;i<v.size();i++){
    // //     cout<<v[i]<<" "<<endl;
    // // }
    // vector<int>::iterator it = v.begin();
    // cout<< *(it)<<" "<<endl;
    // it++;
    // cout<< *(it)<<" "<<endl;
  
    // vector<int> v(5,100);
    // vector<int>::iterator it = v.begin();
    // cout<< *(it)<<" "<<endl;
    // it++;
    // cout<< *(it)<<" "<<endl;
    
    // for(int i=v.size();i>0;i--){
    //     cout <<v.back()<<" "<<endl;
    // }
    // Another method
    // for(vector<int>::iterator it1  = v.begin();it1!=v.end();it1++){
    //     cout<<*(it1)<<" "<<endl;
        
    // }
    // Another method to print all the elements in the array
    vector <int>  v(6,20);
    v.insert(v.begin()+1,2,100);
    

    vector<int> copy(4,10);
    v.insert(v.end(),copy.begin(),copy.end());
    for(auto it :v){
        cout<<it<<" "<<endl;
    }
// 
cout <<"the size of the vector is "<<endl;;
    cout <<v.size()<<endl;


}