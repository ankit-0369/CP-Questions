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
    int cnt=0;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        if(x>4)  cnt++;
    }

    if(cnt == n) cout<<"YES\n";
    else cout<<"NO\n";
 }
return 0;
}