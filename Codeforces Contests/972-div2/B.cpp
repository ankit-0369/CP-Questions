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
typedef unsigned long long lli;
#define loop(i, j, k) for (int i = j; i < k; i += 1)
#define rloop(i, j, k) for (int i = j; i >= k; i -= 1)
#define all(v)   v.begin(), v.end()
#define rall(v)   v.rbegin(), v.rend() 
#define PI 3.1415926535897932384626433832795

using namespace std;

void solve(){
 int n; cin>>n;

 lli a[n+1];
 for(int i=0; i<n; i++) cin>>a[i];
a[n]= 1e20;
auto possible= [&](lli x){
    int cnt= 0;
    for(int i=0; i+1<n; i++){
        if(a[i+1] - a[i] <= x) {
            i++;
            // continue;
        }
        cnt++;
    }
    return cnt<=1;
};

 lli l= 1, r= 1e18;

 while(l<r){
    lli mid= (l+r)>>1;
    if(possible(mid)){
        r= mid;
    }else l= mid+1;
 }

 cout<<l<<"\n";
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