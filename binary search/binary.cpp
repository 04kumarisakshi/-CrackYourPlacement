#include<bits/stdc++.h>
using namespace std;

 int search(int nums[],int n, int target) {
     int start = 0;
     int end = n-1;
     int mid = start + (end - start )/2;
     while(start <= end){
        if(nums[mid ] == target){
            return mid;
        } 
        else if( target > nums[mid]){
            start = mid +1;
        }
        else{
            end  = mid -1;
        }
        mid = start + (end - start )/2;
        
     }   
     return -1;
    }
int main(){
     int n ;
        cin>>n;
    int arr[n];
        
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
       
    }
    int t;
    cin>>t;
    int ans =search(arr,n,t);
    cout<<ans;
}
