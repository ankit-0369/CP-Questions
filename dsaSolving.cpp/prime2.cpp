#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
 int n;
 cin>>n;
 int check=0;
 for(int i=2; i<=n/2; i++){
    if(n%i==0){
        check= 1;
        break;
    }
 }
 if(check==0){
    cout<<"prime\n";
 }else
    cout<<"nit a prime\n";
    }
return 0;
}