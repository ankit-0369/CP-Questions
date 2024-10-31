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
 lli n,k; cin>>n>>k;
 lli a[n];
 for(auto &x:a) cin>>x;
 int i=0, j= n-1;
 sort(a, a+n);
 vector<lli> pre(n+1, 0);
 for(int i=0; i<n; i++){
    pre[i+1]= a[i] + pre[i];
 }
//  for(auto v: pre) cout<<v<<" ";cout<<endl;
 lli ans= 0;
 for(lli m= 0; m<=k; m++){
    // cout<<pre[2*m+1]<<" "<<pre[n-(k-m)+1]<<"\n";
    ans= max(ans, pre[n-(k-m)]-pre[2*m]);
 }

 cout<<ans<<"\n";
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