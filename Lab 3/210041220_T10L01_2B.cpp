#include<iostream>
#include<vector>
#include<string>
#include<stack>
using namespace std;
int main(){
    stack <int> stk1,stk2;
    vector<int>v1,v;
    int n,val,count=1,temp=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>val;
        v1.push_back(val);
        

    }   
    for(int i=n-1 ; i>=0 ; i--){
        v.push_back(v1[i]);
    }
     
    for(int i=n-1 ; i>-1 ; i--){
        while(!stk2.empty() && stk2.top()==count){
                stk2.pop();
                stk1.push(count);
                count++;
            }
        if(v[i]==count){
            stk1.push(count);
            count++;
        }
        else{
            
            
            stk2.push(v[i]);
        }
    }
     while(!stk2.empty())
    {
       
        stk1.push(stk2.top());
        stk2.pop();
        
           
    }
    for(int i=n ; i>0  ; i--){
        if(i==stk1.top()){
            stk1.pop();
        }
        else{
            temp++;

            break;
        }
    }
    if(temp==0) cout<<"Yes"<<endl;
    else cout<<"No";

}    