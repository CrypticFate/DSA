#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    vector<int>v,v1;
    stack<int>stk;
    int val;
    while(1){
        cin>>val;
        if(val==-1) break;
        v.push_back(val);
        
    }
    for(int i=v.size()-1 ; i>=0 ; i--){
        while(1){
        if(!stk.empty() && stk.top()<=v[i])
            stk.pop();
        else break;    
        }
        if(!stk.empty()){
            v1.push_back(stk.top());
        }
        else v1.push_back(-1);
        
        
        stk.push(v[i]);
    }
    for(int i=v.size()-1 ; i>=0 ; i--){
        cout<<v1[i]<<" ";
    }

}