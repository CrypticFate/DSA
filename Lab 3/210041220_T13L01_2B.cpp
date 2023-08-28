#include <iostream>
#include <stack>
#include<vector>
#include<string>
using namespace std;
int main(){
    stack <char> stk;
    int count=0;
    string str;
    cin >> str;
    for(int i=0 ; i<str.length() ; i++){
            if(str[i]=='('){
                stk.push(')');
            }
            else{
                if(stk.empty() || stk.top()!=str[i]){
                    count++;
                }
                if(!stk.empty()){stk.pop();}
            }
    }
    count+=stk.size();
    cout<<str.length()-count<<endl;

}