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
 int n,m,k;
 cin>>n>>m>>k;
 int l[n], r[m];
 for(int i=0; i<n; i++){
    cin>>l[i];
 }
 for(int i=0; i<m; i++)
 {
    cin>>r[i];
 }
    int ans=0;
    for(int i=0; i<n; i++){

        for(int j=0; j<m; j++){
            if(l[i] + r[j] <=k){
                ans++;
            }
        }
    }

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