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
#define PI 3.1415926535897932384626433832795

using namespace std;

void solve(){
 lli n; cin>>n;
 lli a[n];
 map<int, int> m;
 for(auto &x:a){
     cin>>x;
     m[x]++;

 }
 lli mini= 1e6+1;
 lli fre= n+1;
 lli ans= 1e6+5;
 for(auto it:m){
    int k= it.first, v= it.second;
        lli x= 1LL*(n-v)*k;
        ans= min(ans, x);
 }
//  lli ans= 1LL*(n-m[mini])*mini;
ans= min(ans, n);
    cout<<ans<<"\n";
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