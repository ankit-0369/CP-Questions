#include<bits/stdc++.h>

using namespace std;

int main(){
 int hash[26]= {0};
char s[1000];
cin.getline(s,1000);
 int i=1;
 while(s[i]!='\0'){
    if(s[i]!=',' && s[i]!='{' && s[i]!=' ' && s[i]!='}'){
       
        hash[s[i]-'a']++;
    }
    // cout<<s[i]<<" ";
    
    i++;
 }
 int ct=0;
 for(int i=0; i<26; i++){
    if(hash[i]!=0){
        ct++;
    }
 }
 cout<<ct;
return 0;
}