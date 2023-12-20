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
    if(n%4==3 || n%4==0 || n%3==0 || n%3==4){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
 }
return 0;
}