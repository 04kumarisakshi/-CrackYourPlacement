#include<bits/stdc++.h>
using namespace std;

int main(){
     int n ;
        cin>>n;
        int a=n;
        int revnum=0;
    while (n>0)
    {
   
        int last=n%10;
         revnum =revnum*10+last;
          n=n/10;
    }
    if(a==revnum)
    {
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }
   
}