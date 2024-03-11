/* ------------ ॥ अंतः अस्ति प्रारंभः ॥-------    */
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n;
    int s= __builtin_popcount(n);
    if(s&1) cout<<"ODD\n";
    else cout<<"EVEN\n";
 }
return 0;
}