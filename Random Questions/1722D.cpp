#include <bits/stdc++.h>
#define pb push_back
#define pp pop_back
#define pii pair<int, int>
#define vi vector<int>
#define vc vector<char>
#define vb vector<bool>
#define vlii vector<long long int>
#define mii map<int, int>
#define mib map<int, bool>
#define mic map<int, char>
typedef long long ll;
typedef long long int lli;
#define loop(i, j, k) for (int i = j; i < k; i += 1)
#define rloop(i, j, k) for (int i = j; i >= k; i -= 1)
#define PI 3.1415926535897932384626433832795

using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vlii v;
    lli sum= 0;
    for(int i=0; i<n; i++){
        if(s[i] == 'L'){
            v.push_back((n-i-1)-i);
            sum+= i;
        }else{
            v.push_back(i-(n-i-1));
            sum+= (n-i-1);
        }
    }

    sort(v.begin(), v.end(), greater<int>());
    for(int k= 1; k<=n; k++){
        if(v[k-1]>0) {sum+= v[k-1];}
        cout<<sum<<" ";

    }

    cout<<endl;

    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}