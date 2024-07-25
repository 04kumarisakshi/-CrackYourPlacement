#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string a=s;
    int n =s.length();
   int i=0;
   int j=n-1;
   while(i<j)
   {
    char temp=s[i];
    s[i]=s[j];
    s[j]=temp;
    i++;
    j--;
   }
 if(s==a)
 {
    cout<<"palindrome";
 }
 else{
    cout<<"not palindrome";
 }
}