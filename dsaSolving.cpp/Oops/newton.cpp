#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int hash[1001];
    for(int i=0; i<1001; i++){
            hash[i]= 0;
    }
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int ct=0;
    hash[a]++;
     hash[b]++;
      hash[c]++;
       hash[d]++;
    for(int i=0; i<1000; i++){
        if(hash[i]==2){
            ct++;
        }
    }
    if(ct==2){
        cout<<"yes\n";
    }else
    cout<<"no\n";
    return 0;
}