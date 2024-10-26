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
 vector<pii> vp(n);
 for(int i=0; i<n; i++){
    int x, y; cin>>x>>y;
    vp[i]= {x,y};
 }

sort(vp.begin(), vp.end(), [](pii a, pii b){
    int cnt1= 0, cnt2= 0;
       int cnt1= 0, cnt2= 0;
    cnt1+= a.first + a.second;
    cnt2+= b.second + b.first;
     return (cnt1 < cnt2);
    return (a.first < b.first);
});

for(auto p : vp){
    cout<<p.first <<" "<<p.second<<" ";
}

cout<<"\n";


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