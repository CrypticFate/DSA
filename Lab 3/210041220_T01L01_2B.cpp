#include<iostream>
#include<cstdlib>
using namespace std;
struct stack{
    int size;
    int top;
    int *arr;
};
bool isEmpty(struct stack *ptr){
    if (ptr->top==-1){
        return true;}
        
    else {return false;}
    
}
bool isFull(struct stack *ptr){
    if(ptr->top==ptr->size-1){
        return true;
    }
    else{
        return false;
    }
}
void push(struct stack *ptr,int val){
    if(isFull(ptr)){
        cout<<"Overflow"<<endl;
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
        
    }
}
int pop(struct stack *ptr){
    if(isEmpty(ptr)){
        cout<<"Underflow"<<endl;
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }

}

int main(){
    struct stack *s=(struct stack *)malloc(sizeof(struct stack));
    int n;
    cin>>n;
    s->size=n;
    s->top=-1;
    s->arr=(int *)malloc(s->size * sizeof(int));
    while(1){
        int cmd,value;
        cin>>cmd;
        if(cmd==-1) break;
        if(cmd==1){
            cin>>value;
            push(s, value);
            for(int i=0 ; i<=s->top ; i++){
                cout<<s->arr[i]<<" ";
            }
        }
        else if (cmd == 2 ){
            pop(s);
        }   
        else if(cmd==3){
            if(isEmpty(s)) {cout<<"True"<<endl;}
            else {cout<<"False"<<endl;}
        } 
        else if(cmd==4){
            if(isFull(s)) {cout<<"True"<<endl;}
            else {cout<<"False"<<endl;}
        }
        else if(cmd==5){
            cout<<s->top+1<<endl;
        }
        else if(cmd==6){
            cout<<s->arr[s->top]<<endl;
        }

        
    
    }
}    