#include<bits/stdc++.h>
using namespace std;


int gcd(int a,int b ){

    if(b==0)
    {
return a;
    }
    gcd(b,a%b);

}
int main(){
     int n,m;
        cin>>n>>m;
    int ans=gcd(n,m);
   cout<<ans;
}