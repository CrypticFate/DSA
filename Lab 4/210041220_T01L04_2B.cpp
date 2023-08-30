#include<iostream>
#include<cstdlib>
using namespace std;
struct queue
{
    int size;
    int f;
    int r;
    int* arr;
};
int isFull(struct queue *q){
    if(q->r==q->size-1){
        return 1;
    }
    return 0;
}
int isEmpty(struct queue *q){
    if(q->r==q->f){
        return 1;
    }
    return 0;
}
void enqueue(struct queue *q, int val){
    if(isFull(q)){
        cout<<"Overflow"<<endl;
    }
    else{
        q->r = (q->r +1)%q->size;
        q->arr[q->r] = val; 
        cout<<"Enqued element: "<<val<<endl;
    }
}

int dequeue(struct queue *q){
    int a = -1;
    if(isEmpty(q)){
        cout<<"Underflow"<<endl;
    }
    else{
        q->f = (q->f +1)%q->size;
        q->arr[q->f]=0;
        //q->r = (q->r +1)%q->size;
        a = q->arr[q->f]; 
        for(int i=q->f+1 ; i<=q->r ; i++){
                cout<<q->arr[i]<<" ";
            }
        return a;    
    }
    
}
int main(){
    struct queue q;
    int n,cmd,flag=0;
    cin>>n;
    q.size = n;
    q.f = q.r = -1;
    q.arr = (int*) malloc(q.size*sizeof(int));
    while(1){
        int value;
        cin>>cmd;
        if(cmd==-1) break;
        if(cmd==1){
            cin>>value;
            enqueue(&q, value);
            for(int i=q.f+1 ; i<=q.r ; i++){
                cout<<q.arr[i]<<" ";
            }
            
        }
        else if (cmd == 2 ){
            dequeue(&q);
            
        }   
        else if(cmd==3){
            if(isEmpty(&q)) {cout<<"True"<<endl;}
            else {cout<<"False"<<endl;}
        } 
        else if(cmd==4){
            if(isFull(&q)) {cout<<"True"<<endl;}
            else {cout<<"False"<<endl;}
        }
        else if(cmd==5){
            cout<<"Size :"<<q.r+1<<endl;
        }
        else if(cmd==6){
            cout<<"Front :"<<q.arr[q.f+1]<<endl;
        }
    }
}