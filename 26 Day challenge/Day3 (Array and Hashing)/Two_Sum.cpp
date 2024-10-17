// 1# two sum problem



#include<bits/stdc++.h>
using namespace std;

// brute force approch tc=O(n2)
//pair<int, int>two_sum(int n,int num[],int target)
// { 
//     for(int i=0;i<n;i++)
//     { target=target-num[i];
//        for(int j=i+1;j<n;j++) 
//        {
//         if(num[j]==target)
//         {
//           creturn {i,j};
//         }
//         j++;
//        }
//        i++;
//     }
   
// }
// // better  approch tc=O(nlogn)
// int two_sum(int n,int num[],int target)
// {
//     for(int i=0;i<n;i++)
//     { target=target-num[i];
//     // binary Search

//     }
// }
pair<int, int> two_sum(int n,int num[],int target)
{
    // hash map
    unordered_map<int,int>mp;

    for(int i=0;i<n;i++)
    { target=target-num[i];
    if(mp.count(target))
    {
     return {mp[target],i};
        
    }
    mp[num[i]]=i;
    }
    return {-1,-1};
}

int main()
{
    int n;
    cin>>n;
    int num[n];
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
    }
    int target;
    cout<<"Enter the target value: ";
    cin>>target;
  pair<int, int> result = two_sum(n, num, target);
   if (result.first != -1) {
        cout << "Indices: " << result.first << " and " << result.second << endl;
    } else {
        cout << "No solution found!" << endl;
    }



}