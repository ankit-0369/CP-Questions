#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int solve(int res,int y){
    string cur= bitset<32>(res).to_string();
    string req= bitset<32>(y).to_string();
    bitset<32> b1= bitset<32>(res);
    cout<<b1<<endl;
    int ans=0;
    int flag=0;
    cout<<cur<<"\n"<<req<<"\n\n";
    for(int i=31; i>=0; i--){
        if(cur[i]=='0' && req[i]=='1'){
            ans+= pow(2, 31-i);
        }else if(cur[i]=='1' && req[i]=='0'){
           return -1;
        }
    }
   

    return ans;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,y;
	    cin>>n>>y;
	    int a[n];
	    int res=0;
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	        res= res|a[i];
	    }
	    
	  cout<<"\n"<<solve(res,y)<<endl;

	}

  
	return 0;
}
