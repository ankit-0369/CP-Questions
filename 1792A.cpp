#include<bits/stdc++.h>

using namespace std;

int main(){
 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n;
    int h[n];
    int ct1=0;
    for(int i=0; i<n; i++){
        cin>>h[i];
        if(h[i]==1)
         ct1++;
    }
    cout<<(n-ct1/2)<<"\n";
 }
return 0;
}