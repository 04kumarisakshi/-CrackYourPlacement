#include<bits/stdc++.h>
using namespace std;

int main(){
     int n ;
        cin>>n;
    int arr1[n];
     unordered_set<int> s ;
     
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
        s.insert(arr1[i]);
        
    }
    int m;
    cin>>m;
     int arr2[m];
    unordered_set<int> a;
    for(int i=0;i<m;i++)
    {
       cin>>arr2[i];
        a.insert(arr2[i]);
        
    }
   vector<int> v;
   v.insert(v.end(),s.begin(),s.end());
    v.insert(v.end(),a.begin(),a.end());
     sort(v.begin(),v.end());
     int len=v.size();
    for(int i=0;i<len;i++)
    {
        if(v[i]==v[i+1])

        {
            cout<<v[i]<<" ";
            
        }
    }

}