/* ------------ ॥ अंतः अस्ति प्रारंभः ॥-------    */
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
 int n;
 cin>>n;
 int a[n];
    int co=0;
 for(int i=0; i<n; i++){
    cin>>a[i];
    if(a[i]&1)
    co++;
 }
//  cout<<co;
 
 if(co==1){
    for(int i=0; i<n; i++){
        if(a[i]&1)
         cout<<i+1;
       
    }
 }else{
    // cout<<"run";
    for(int i=0; i<n; i++){
        if(!(a[i]&1))
        cout<<i+1;
     
    }
 }




return 0;
}