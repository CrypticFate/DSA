#include<iostream>
#include<stack>
using namespace std;
int main() {
    int n,q,size=0;
    stack <int> push_q,pop_q,temp;
    cin>>n>>q;
    while(q--){
        int cmd,val;
        cin>>cmd;
        if(cmd==1){
            cin>>val;
            if(size==n){
                cout<<"Size :"<<size<<"Elements : Overflow!"<<endl;
            }
            else{
                size++;
                cout<<"Size : "<<size<<' '<<"Elements :";
                while(!pop_q.empty()){
                    pop_q.pop();
                }
                
                push_q.push(val);
                //cout<<push_q.top()<<endl;
                while(!push_q.empty()){
                    pop_q.push(push_q.top());
                    temp.push(push_q.top());
                    push_q.pop();
                }
                while(!temp.empty()){
                    cout<<temp.top()<<' ';  
                    push_q.push(temp.top());
                    temp.pop();
                }
            }
        }
        else if(cmd==2){
            if(size==0){
                cout<<"Size : "<<size <<" Elements: Null"<<endl;
            }
            else{
                size--;
                cout<<"Size : "<<size<<' '<<"Elements :";
                // while(!pop_q.empty()){
                //     pop_q.pop();
                // }
                while(!push_q.empty()){
                    push_q.pop();
                }
                //cout<<pop_q.top()<<endl;
                pop_q.pop();
                //cout<<pop_q.top()<<endl;
                if(size==0){
                cout<<"Null"<<endl;
                }
                while(!pop_q.empty()){
                    temp.push(pop_q.top());
                    push_q.push(pop_q.top());
                    cout<<pop_q.top()<<' ';
                    pop_q.pop();
                    //cout<<pop_q.top()<<' ';
                }
                while(!temp.empty()){
                    pop_q.push(temp.top());
                    temp.pop();
                }
            }
        }

    }
}    