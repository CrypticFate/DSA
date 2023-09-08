#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t,n,k,temp,count,maxVal,maxIndex;
    cin>>t>>n>>k;
    vector <int> v;
    vector <int> res;
     
    while(t--){
        count =0;
        while(count<n){
            cin>>temp;
            v.push_back(temp);
            count++;
        }
        for(int i=0 ; i< k ; i++){
            if(maxVal<=v[i]){
                maxVal=v[i];
            }
        }
        
        
        

        
            
            
        
        for(int i=0 ; i<res.size() ; i++){
            cout<<res[i]<<" ";
        }

    }
    
}