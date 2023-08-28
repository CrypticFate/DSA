#include<iostream>
#include<vector>
#include<string>
#include<stack>
using namespace std;
int main(){
    int n;
    stack <char> stk;
    string line;
    cin>>n;
    cin.ignore();
    
    
    
    for(int j=0 ; j<n ; j++){
        getline(cin,line);
        
        for (int i = 0; i < line.length(); i++)
        {
            if (line[i] == '[')
            {
                stk.push(']');
            }
            else if (line[i] == '{')
            {
                stk.push('}');
            }
            else if (line[i] == '(')
            {
                stk.push(')');
            }
            else if (line[i] == ']' || line[i] == '}' || line[i] == ')')
            {
                if (stk.empty() || stk.top() != line[i])
                {
                    cout<<"Error";
                    return 0;
                }

                stk.pop();
            }
            else
                continue;
        }
   
    
}   
    if(!stk.empty()) cout<<"Error"<<endl;
    else cout<<"No Error"<<endl;

    return 0;
} 