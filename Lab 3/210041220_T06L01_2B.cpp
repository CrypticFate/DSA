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
void push(struct stack *ptr,char ch){
    if(isFull(ptr)){
        cout<<"Overflow"<<endl;
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=ch;
        
    }
}
char pop(struct stack *ptr){
    if(isEmpty(ptr)){
        cout<<"Underflow"<<endl;
    }
    else{
        char ch = ptr->arr[ptr->top];
        ptr->top--;
        return ch;
    }

}
int main(){
    struct stack *s=(struct stack *)malloc(sizeof(struct stack));
    int t;
    cin>>t;
    s->size=100;
    s->top=-1;
    s->arr=(int *)malloc(s->size * sizeof(int));

    while(t--){
        string line;
        cin>>line;
        for(int i=0 ; i<line.size() ; i++){
            if(line[i]=='(' || line[i]=='{' || line[i]=='['){
                push(s,line[i]);
            }
        if((s->arr[s->top]=='(' && line[i]== ')') || (s->arr[s->top]=='{' && line[i]== '}') || (s->arr[s->top]=='[' && line[i]== ']')) {
            pop(s);
        } 
            
        }
        
        
            if(isEmpty(s)){
                cout<<"yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        

    }
      
}