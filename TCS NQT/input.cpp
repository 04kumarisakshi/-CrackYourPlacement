#include<bits/stdc++.h>
using namespace std;
int main()
{
    // string s;
    // cin>>s;
    // int index=0;
    // while(s[index]!=',')
    // {
    //     index++;
    // }
    // string chars=s.substr(0,index);
    // string num=s.substr(index+1,s.size()-index+1);
    // double val =stod(num);
    // cout<<chars<<endl;
    // cout<<val;


    // for array input
      vector<int> arr;
    string input;
    getline(cin, input);
    
    stringstream ss;
    for (char c : input) 
        if (isdigit(c) || c == '-' || c == ' ') ss << c;
        else ss << ' ';

    int num;
    while (ss >> num) arr.push_back(num);

    for (int num : arr) cout << num << " ";
    return 0;

}