#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
     int m;
     cin>>n>>m;
     int r;
     while(m!=0)
     {
        r=n%m;
        n=m;
        m=r;
     }
     cout<<n;

}