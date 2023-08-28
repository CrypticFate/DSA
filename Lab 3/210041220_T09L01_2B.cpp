#include<iostream>
#include<vector>
#include<string>
#include<stack>
using namespace std;
int main(){
    stack <char> stk;
    string s;
    cin>>s;
    for(int i=0 ; i<s.size() ;i++){
        
        if(!stk.empty())    
            if(stk.top()==s[i]){
                stk.pop();
            }
            else{
                stk.push(s[i]);
            }
        else
            stk.push(s[i]);
            
        }
    if(stk.empty()) cout<<"Null";
    s.clear();
    while(!stk.empty()){
        s+=stk.top();
        stk.pop();
    }
    for(int i=s.length()-1 ; i>=0 ; i--){
        cout<<s[i];
    }

    
    
}    