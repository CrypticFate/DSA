#include<iostream>
#include<vector>
#include<string>
using namespace std;
int binarySearch(int arr[],int size,int k)
{
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<=end)
    {
        if(arr[mid]==k)
        {
            return mid+1;
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
    
    if(mid==0) return mid;
    else
    return mid+1;
}        
int main() {
    int n,r;
    cin>>n>>r;
    int arr[100];
    for(int i=0 ; i<n ; i++){
        cin >>arr[i] ;
    }
    for(int i=0 ; i<r ; i++){
        int p;
        cin>>p;
        cout <<binarySearch (arr , n , p)<<endl;
    }
}