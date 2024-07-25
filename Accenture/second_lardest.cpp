#include<bits/stdc++.h>
using namespace std;

int main(){
     int n ;
        cin>>n;
    int arr1[n];   
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
           
    }
    sort(arr1,arr1+n);
    cout<<arr1[n-2];

}