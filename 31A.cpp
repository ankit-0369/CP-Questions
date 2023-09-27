/* ------------ ॥ अंतः अस्ति प्रारंभः ॥-------    */
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
 int n;
 cin>>n;
 if(n>0) cout<<n;
 else{
    if((n%10)> ((n%100)/10)){
        int x= n%10;
        n/=100;
        // cout<<n*10-7<<" ";
        n= n*10 +x;
        cout<<n;
    }else{
        n/=10;
        cout<<n;
    }
 }
return 0;
}