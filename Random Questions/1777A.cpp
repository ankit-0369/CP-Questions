#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
 int t;
 cin>>t;
 while(t--){
    ll n;
    cin>>n;
    vector<ll> a;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    int i=0;
    int ct=0;
    while(i+1<a.size()){
        if(a[i]%2==0 && a[i+1]%2==0 || a[i]%2!=0 && a[i+1]%2!=0){
            a[i]= a[i]*a[i+1];
            ct++;
            int j=i+1;
            while(j+1<n){
                a[j]=a[j+1];
                j++;
            }
            a.pop_back();
        }else
        i++;
    }
    cout<<ct<<"\n";
 }
return 0;
}