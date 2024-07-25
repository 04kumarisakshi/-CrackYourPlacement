#include<bits/stdc++.h>
using namespace std;

int main(){
     int n ;
    int count=0;
        cin>>n;
    int arr1[n];
        
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
       
    }
    sort(arr1,arr1+n);
     for(int i=0;i<n;i++){
    if(arr1[i]==arr1[i+1])
    {count++;

     }
     else{
        cout<<arr1[i] <<"=";
        cout<<count+1<<" ";
        count=0;
     }
}

}