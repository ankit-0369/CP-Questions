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
 ll n,k; cin>>n>>k;
 ll a[n];
 for(auto &x: a) cin>>x;
 ll maxi= LLONG_MIN;
 ll sum= 0;
for(auto &x:a){
    maxi= max(maxi, x);
    sum+= x;
}
for(ll i=n; i>0; i--){
    ll q= (sum+ k)/i;
    if(q*i > sum-1 && q> maxi-1){
        cout<<i<<"\n";
        break;
    }
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