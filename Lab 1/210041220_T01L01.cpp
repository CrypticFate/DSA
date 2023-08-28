#include <iostream>
using namespace std;
void SortArray(int arr[],int count){
    for(int i=0 ; i<count-1 ; i++){
        for(int j=0 ; j<count-1-i ; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

}
int main() {
    int numbers[100];
    int num=0,count=0;
    while(1){
        cin>>num;
        if(num<=0){
            break;
        }
        numbers[count]=num;
        count++;
      
    }
    SortArray(numbers,count);
    int count_1=1;
    for(int i=0 ; i<count ; i++){
        for(int j=i+1 ; j<count ; j++){
            if(numbers[i]==numbers[j]){
                count_1++;
            }
            else{
                break;
            }
        }
        
        cout<<numbers[i]<<"==>"<<count<<endl;
        i+=(count_1-1);
        
    }
    
    return 0;
}    