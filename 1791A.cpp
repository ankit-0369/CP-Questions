#include<bits/stdc++.h>

using namespace std;

int main(){
 int t;
 cin>>t;
 string s= "codeforces";
 while(t--){
    char ch;
    cin>>ch;
    int i=0;
    bool found= false;
    while(s[i]!='\0'){
        if(ch==s[i]){
            found=true;
            break;
        }
        i++;
    }
    if(found){
        cout<<"YES\n";
    }else
    cout<<"NO\n";
 }
return 0;
}