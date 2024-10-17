#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int m =n;
    int count=0;
    while(n>0)
    {
        int last_digit=n%10;
        if(m%last_digit==0)
        {
           count++;
        }
         n=n/10;
    }
    cout<<count;
}