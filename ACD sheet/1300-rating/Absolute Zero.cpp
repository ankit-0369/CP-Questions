/*
======================================================================== 
------------------------------- ॥  अहं ब्रह्मास्मि !  ॥--------------------------
=========================================================================
*/
#include<bits/stdc++.h>
#define pb push_back
#define pp pop_back
#define pii pair<int,int>
#define vi vector<int>
#define vc vector<char>
#define vb vector<bool>
#define mii map<int,int>
#define mib map<int, bool>
#define mic map<int,char>
typedef long long ll;
typedef long long int lli;
#define loop(i, j, k) for (int i = j; i < k; i += 1)
#define rloop(i, j, k) for (int i = j; i >= k; i -= 1)
#define all(v)   v.begin(), v.end()
#define rall(v)   v.rbegin(), v.rend() 
#define PI 3.1415926535897932384626433832795

using namespace std;

void solve(){
 int n; cin>>n;
 vector<int> a(n);
 int cntodd= 0;
 for(auto &x:a){
     cin>>x;
     if(x&1) cntodd++;
 }

 if(cntodd>0 && cntodd != n){
    cout<<-1<<"\n";
    return;
 }else{
    vector<int> ans;
    for(int i= 29; i>=0; i--)
        ans.push_back(1<<i);

    if(cntodd == 0) ans.push_back(1);
    cout<<ans.size()<<"\n";
    for(auto val: ans){
        cout<<val<<" ";
    }

    cout<<endl;

 }
 return;
 
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t;
cin>>t;
while(t--){
  solve();
}

return 0;
}