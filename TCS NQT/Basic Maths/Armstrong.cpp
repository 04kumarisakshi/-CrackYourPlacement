#include<bits/stdc++.h>
using namespace std;
int main(){
int n;

int sum=0;
cin>>n;
int m=n;
while(n>0)
{
   int last_digit=n%10;
   sum =sum +last_digit*last_digit*last_digit;
   n=n/10; 
}
if(sum ==m)
{
    cout<<"yes";

}
else{
    cout<<"no";
}
}