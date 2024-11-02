
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
const int MAXN = 1e5 + 5;
 vector<ll> x(MAXN);
    vector<ll> ks(MAXN);

void solve(){
 int n, q;
        cin >> n >> q;
        for (int i = 0; i < n; ++i)
            cin >> x[i];
        for (int i = 0; i < q; ++i)
            cin >> ks[i];

        sort(x.begin(), x.begin()+n);

        map<ll, ll> counts;
        for (int i = 0; i < n - 1; ++i) {
            ll len = x[i + 1] - x[i] - 1;
            if (len > 0) {
                ll less = i + 1;
                ll more = n - less;
                ll coverage = less * more;
                counts[coverage] += len;
            }
        }
        for (int i = 0; i < n; ++i) {
            ll less = i;
            ll more = n - i - 1;
            ll coverage = less + more + less * more;
            counts[coverage]++;
        }

        for (int i = 0; i < q; ++i) {
            ll k = ks[i];
            if (counts.count(k))
                cout << counts[k] <<' ';
            else
                cout <<0 <<' ';
        }
       cout<<endl;
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