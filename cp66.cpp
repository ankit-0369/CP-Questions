#include<bits/stdc++.h>

using namespace std;

int main(){
 int t;
 cin>>t;
 while(t--){
    int n,a,b;
    cin>>n>>a>>b;
    int t=0;
    while(n!=0){
        t+= a+ b;
        n= n/2;
    }
    cout<<t<<endl;
 }
return 0;
}