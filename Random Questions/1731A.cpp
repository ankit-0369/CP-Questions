#include<bits/stdc++.h>

using namespace std;

int main(){
int t;
cin>>t;
while(t--){

     long long int n;
 long long int p=1;
 cin>>n;
 long long int a[n];
 for(int i=0; i<n; i++){

    cin>>a[i];
    p*= a[i];
 }
 long long int res=0;
 res= p+ (n-1);
 cout<<res*2022<<"\n";


}
return 0;
}