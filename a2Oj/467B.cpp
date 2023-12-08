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

int solve(){
 int n,m, k;
 cin>>n>>m>>k;
 int x[m+1];
 for(int i=0; i<m+1; i++){
    cin>>x[i];
 }

    int cnt=0;

 for(int i=0; i<m; i++){
    int bit= (x[i]^x[m]);
    int diff= __builtin_popcount(bit);
    // cout<<diff<<" "<< x[i]<< "\n";
    if( diff<=k)
    cnt++;
 }


return cnt;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t;
// cin>>t;
t=1;
while(t--){
  cout<<solve();
}

return 0;
}