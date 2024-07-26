#include<bits/stdc++.h>
using namespace std;

int main(){
     int n ;
        cin>>n;
        int  a=n;
        int m=a;
        int count=0;
        int num =0;
       while (n>0)
    {
        
        count++;
        n=n/10;
         
    }
        while (a>0)
    {
        int last=a%10;
        int w=(pow(last,count));
    num =num +w;
    cout<<num<<" "<<w<<" ";
        a=a/10;
        
        
    }

   
   cout<<num<<" ";
   if(num==m)
   {
    cout<<"yes";
   }
   else{
    cout<<"no";
   }
}