#include<bits/stdc++.h>
#include<cstdint>
using namespace std;


int main(){
    ios_base::sync_with_stdio();
    cin.tie(NULL);
    const unsigned long long M= 1000000007;
 int t;
 cin>>t;
 while(t--){

uint64_t n;
    cin>>n;
    uint64_t  sum=0;
    uint64_t i=1, j=1;
    while(i*j<n*n){
        sum= ( sum %M+ (i%M* j%M)%M)%M;
        j++;
        sum= ( sum %M+ (i%M* j%M)%M)%M;
        i++;
    }
            sum= ( sum %M+ (n%M*n%M)%M )%M;

    uint64_t res=  (sum%M * 2022%M ) % M;
    cout<<res<<"\n";
 }
return 0;
}