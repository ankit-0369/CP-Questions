#include<bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    string s;
        int ct=0;
	    cin>>n;
	    cin>>s;
        int i=0, ct1=0, ct0=0;
	    while(s[i]!='\0'){
	        if(s[i]=='1')
	        ct1++;
            else
            ct0++;
            i++;
	    }
        if(ct0<ct1){
            cout<<(ct0+1)<<"\n";
        }else
        cout<<ct1<<"\n";
	    
	}
	return 0;
}
