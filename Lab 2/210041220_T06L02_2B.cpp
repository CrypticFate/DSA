#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main() {
    vector<int>pos;
    vector<float>value;
    int n;
    float arr1[100];
    while(1){
        cin>>n;
        if(n==-1) break;
        pos.push_back(n);
        
    }
    
    float val;
    for(int i=0 ; i<pos.size() ; i++){
        cin>>val;
        value.push_back(val);
    }
    for(int i=0 ; i<value.size() ; i++){
        arr1[pos[i]]=value[i];
    }
    
    for(int i=1 ; i<=value.size() ; i++){
        cout<<arr1[i]<<" ";
    }
    
    
    
    
}