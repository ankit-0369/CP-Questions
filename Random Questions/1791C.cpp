#include<bits/stdc++.h>

using namespace std;

int main(){
 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n;
    char s[n];
    cin>>s;
    int i=0, j=n-1, ct=0;
    while(i<j){
        if(s[i]=='1' && s[j]=='0'){
            ct++;
        }else if(s[i]=='0'&&s[j]=='1'){
            ct++;
        }else
        break;
       
       
        i++,j--;
    }
    cout<<(n-2*ct)<<"\n";
 }
return 0;
}