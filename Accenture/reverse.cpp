// reverse  a string 
#include <bits/stdc++.h>
using namespace std;
void revers(char arr[],int i,int j ,int n){
 
 while(i<j)
    {
        char temp =arr[i];
arr[i]=arr[j];
arr[j]=temp;
i++;
j--;
    }
      
     for(i =0;i<n;i++)
{
  
  cout<<arr[i];
}
   
    }
int main(){
         int n;
        int i=0;
  int j=n-1;
    cin>>n;
    char c;
    char arr[n];
   
    for(i =0;i<n;i++)
{
  
  cin>>arr[i];
}
   
 revers(arr,0,n-1,n);  

}