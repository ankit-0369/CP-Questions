#include<bits/stdc++.h>

using namespace std;

int main(){
 int t;
 cin>>t;
 while(t--){
    int hash[26]={0};
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i=0;
    while(s[i]!='\0'){
        hash[s[i]-'a']++;
        i++;
    }
    bool found= false;
    for(int i=0; i<26; i++){
        if(hash[i]>1){
           found=true;
           break;
    }
    
 }
 if(found){
    cout<<n-2<<"\n";
 }else
    cout<<-1<<"\n";
 }
return 0;
}