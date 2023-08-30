#include<iostream>
#include<vector>
#include<string>
using namespace std;
string binarySearch(int arr[],string arr2[],int size,int k)
{
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<=end)
    {
        if(arr[mid]==k)
        {
            return arr2[mid];
        } 
    
        else
        {
            if(arr[mid]<k)
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
            mid=(start+end)/2;
        }
    }
    
    if(mid==0) return arr2[mid];
    else
    return arr2[mid];
}        
int main(){
    int level,trials,k;
    cin>>level>>trials;
    int arr1[100];
    string arr2[100];
    
    for(int i=0 ; i<level ; i++){
        cin>>arr1[i];
        cin>>arr2[i];
    }
    for(int i=0 ; i<trials ; i++){
        cin>>k;
        cout <<binarySearch (arr1 , arr2 , level , k)<<endl;
    }
}