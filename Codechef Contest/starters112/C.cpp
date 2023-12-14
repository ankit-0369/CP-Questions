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
    string s;
    cin>>s;
    int cur0=0;
    for(int i=0; i<n-1; i++){

            if(s[i]=='0'){
                cout<<"NO\n";
                cur0++;
            }else{
                if(cur0>0){
                    cout<<"NO\n";
                }else{
                    cout<<"IDK\n";
                }
            }
        
     
    }

    if(cur0>0 || s[n-1]=='0'){
        cout<<"NO\n";
    }else{
        cout<<"YES\n";
    }
 }
return 0;
}