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
int n,q; cin>>n>>q;
string a, b; cin>>a>>b;

vector<vi> pa(n+1, vi(26, 0));
vector<vi> pb(n+1, vi(26, 0));

loop(i, 1, n+1){
    loop(j,0,26){
        pa[i][j]= pa[i-1][j];
        pb[i][j]= pb[i-1][j];
    }
    pa[i][a[i-1]-'a']++;
    pb[i][b[i-1]-'a']++;

}

loop(i,0,q){
    int l,r; cin>>l>>r;
    int ans= 0;
    loop(j,0,26){
         int cb= pb[r][j] - pb[l-1][j];
        int ca= pa[r][j]- pa[l-1][j];
        ans+= abs(cb-ca);
    }
    cout<<(ans/2)<<"\n";
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