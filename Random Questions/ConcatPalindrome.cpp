#include<bits/stdc++.h>

using namespace std;

int main(){
 int t;
 cin>>t;
 while(t--){
    int hash[26]= {0};
   int a,b;
   cin>>a>>b;
    string s1,s2;
cin>>s1>>s2;
    int i=0;
    while(s1[i]!='\0'){
        hash[s1[i]-'a']++;
        i++;
    }
    i=0;
    while(s2[i]!='\0'){
        hash[s2[i]-'a']++;
        i++;
    }
    int oct=0, ect=0;
    for(int j=0; j<26; j++){
        if(hash[j]%2==0){
                ect++;
        }else
        oct++;
    }
    if(oct==1||ect==1||oct==0||ect==0){
        cout<<"yes\n";
    }else
    cout<<"no\n";
 }

return 0;
}