#include <iostream>
#include <stack>
#include<vector>
#include<string>
using namespace std;
int main(){
    stack <char> stk;
    
    int t,n1,count=0;
    cin>>t;
    while(t--){
        cin>>n1;
        string s1;
        cin>>s1;
        count =0;
        for(int i=0 ; i<s1.length() ; i++){
            if(s1[i]=='('){
                stk.push(')');
            }
            else{
                if(!stk.empty() && stk.top()==s1[i]){
                    count+=2;
                    stk.pop();
                }
            }
        }
        cout<<(n1-count)/2<<endl;
        s1.clear();
        while(!stk.empty()){
            stk.pop();
        }
       
    }
}