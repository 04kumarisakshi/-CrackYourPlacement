#include<bits/stdc++.h>
using namespace std;
int main(){
int a=0;
int b=1;
int n;
int fib=0;
cin>>n;
for(int i=1;i<n;i++)
{
fib=a+b;
a=b;
b=fib;
}
cout<<fib;
}