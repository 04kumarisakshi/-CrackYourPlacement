#include<bits/stdc++.h>
using namespace std;
int main(){
int ans=1;
    int n;
    cin>>n;
    int count=0;
   for(int i=1;i*i<=n;i++)
   {
    if(n%i==0)
    {
        count++;
    }
   }
   if(count==2){
    cout<<"not prime";
   }
   else{
    cout<<"prime";
   }
}