#include<iostream>
#include<vector>
#include<string>
#include<stack>
#include<math.h>
using namespace std;
int main(){
    int flag=0;
    string s;
    stack <int> stk;
    cin>>s;
    for(int i=0 ; i<s.length() ; i++){
        if(s[i]>='0' && s[i]<='9'){
            stk.push(s[i]-'0');
        }
        else{
            int op1 = stk.top(); 
            stk.pop();
            int op2 = stk.top(); 
            stk.pop();
            flag++;
            switch (s[i])
            {
                case '+':
                    stk.push(op1+op2);
                    break;
                case '-':
                    stk.push(op1-op2);
                    break;
                case '*':
                    stk.push(op1*op2);
                    break;
                case '/':
                    stk.push(op1/op2);
                    break;    
                
                
            }
        
        }

    }
    if(flag==0){return 0;}
    else
    cout<<abs(stk.top());
}   
