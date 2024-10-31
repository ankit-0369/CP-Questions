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
 lli n, c; cin>>n>>c;
 lli a[n];
 for(auto &x:a) cin>>x;
 lli sum= 0, sqsum= 0;
 for(auto &x:a){
    sum+= x;
    sqsum+= (x*x);
 }

auto find= [&](lli w){
    return (4*n*w*w + 4*sum*w + sqsum-c);
    // return w;
};
lli l= 1;
lli r= 1e10;
while(l<=r){
   lli m= l+(r-l)/2;
   lli sum= 0;
   for(int i=0; i<n; i++){
        sum+= (a[i] + 2*m)*(a[i] + 2*m);
        if(sum >c) break;
   }
   if(sum == c){
        cout<<m<<"\n";
        return;
   }else if(sum > c) r= m-1;
   else l= m+1;
}
cout<<-1<<'\n';
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