#include<iostream>
#include<vector>
#include<string>
#include<stack>
using namespace std;
int main(){
    int n,j,flag;
    stack<string>stk;
    string line;
    cin>>n;
    cin.ignore();
    
    for(int i=0; i<n ; i++){
        getline(cin , line);
        j=0;   
        string s;
        while(line[j]){
            if(stk.empty()){
                if(line[j]=='<'){
                    while(line[j]!='>'){
                        s+=line[j];
                        j++;
                    }
                    s+='>';
                }
                stk.push(s);
            }
            else{
                if(line[j]=='<' && line[j+1]=='/'){
                    while(line[j]!='>'){
                        s+=line[j];
                        j++;
                    }
                    s+='>';
                    if(stk.top().substr(1)==s.substr(2)){
                        stk.pop();
                        s.clear();

                    }
                    else{
                        cout<<"Error at line "<<i+1<<endl;
                        flag=1;
                        return 0;
                    }
     
                }
                else if(line[j]=='<'){
                    while(line[j]!='>'){
                        s+=line[j];
                        j++;
                    }
                    s+='>';
                    stk.push(s);
                    s.clear();
                }
                else{
                    j++;
                }
            }
            
        }
    }

if(flag!=1) cout<<"No Error"<<endl;    
    

}