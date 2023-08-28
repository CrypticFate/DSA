#include<iostream>
#include<vector>
#include<string>
#include<stack>

using namespace std;
int main(){
    int n,i=1,j;
    vector <int> v;
    vector <string> s;
    stack <int> stk;
    string s1;
    getline(cin,s1);

    cin>>n;
    cin.ignore();
    i=0;
    while(i<s1.length()){
        if(s1[i]>='0' && s1[i]<='9'){
        
        v.push_back(s1[i]-'0'); 
        }
        i++;
        
    } 
    
    j=0;
    i=1;
    while(i<=n && j<v.size()){
        stk.push(i++);
        
        s.push_back("Push");
        if(v[j]==stk.top()){
            j++;
            
        }
        else{
            s.push_back("Pop");
            stk.pop();
        }
    }
        
    for(int i=0 ; i<s.size() ; i++){
        cout<<s[i]<<" ";
    } 
        
        
    


}    