#include<bits/stdc++.h>
using namespace std;
int main(){
    string S;
    getline(cin,S);
      set<char>se;
	    for(int i=0;i<S.size();i++)
	    {
	        if(isalpha(S[i]))
	        {
	       se.insert(tolower(S[i]));
	        }
	    }
	    int size=se.size();
	    if(size==26)
	    {
	        cout<<"1";
	    }
	    cout<<"0";

}