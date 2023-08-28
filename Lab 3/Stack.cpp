#include<iostream>
#include<cstdlib>
using namespace std;
struct stack{
    int size;
    int top;
    int *arr;
};
int isEmpty(struct stack *ptr){
    if(ptr->top==-1){
        return 1;
    
    }
    else return 0;
}
int isFull(struct stack *ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    else return 0;
}
void push(struct stack* ptr,int val){
    if(isFull(ptr)){
        cout<<"Stack Overflow"<<endl;
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
int pop(struct stack *ptr) {
    if(isEmpty(ptr)){
         cout<<"Stack Underflow"<<endl;
         return -1;
    }
    else{
        int value = ptr->arr[ptr->top];
        ptr->top--;
        return value;
    }
}    
int main() {
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    int n;
    cin>>n;
    s->size = n;
    s->top=-1;
    s->arr=(int *)malloc(s->size * sizeof(int));

}    