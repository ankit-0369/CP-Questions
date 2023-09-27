#include<bits/stdc++.h>

using namespace std;

int main(){
 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n;
    int *p;
    int** p1= &p;
    cout<<p<<" "<<p1<<"\n";
    char s[n];
    cin>>s;
    int hash[26]= {0};
    for(int i=0; i<n; i++){
        hash[s[i]-'a']++;
    }
    int ct=0;
    for(int i=0; i<26; i++){
        if(hash[i]>=2){
            ct+= 2;
        }else
        ct+= hash[i];
    }
    cout<<ct<<"\n";
 }
return 0;
}