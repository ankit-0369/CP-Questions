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
 int n; cin>>n;
 int a[n];
 for(auto &x: a) cin>>x;
int i=1, cnt= 0;
n= unique(a, a+n) - a;
int ans= n;
for(int i=0; i+2<n; i++){
    ans-= (a[i] < a[i+1] && a[i+1] < a[i+2]);
    ans-= (a[i] > a[i+1] && a[i+1] > a[i+2]);
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