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
        int n;
        cin >> n;
        vector<int> v;
        
        for (int i = 0; i < n; ++i) {
            int x; cin>>x;
            v.pb(x);
        }
        
        for (int i = 1; i < n - 1; ++i) {
            if (v[i - 1] <= v[i + 1] && v[i] >= 2 * v[i - 1]) {
                v[i + 1]-= v[i - 1];
                v[i]-= 2*v[i - 1];
                v[i - 1]= 0;
            }
        }
        
        bool az = true;
        for (int i = 0; i < n; ++i) {
            if (v[i] != 0) {
                az = false;
                break;
            }
        }
        
        if (az) cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
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