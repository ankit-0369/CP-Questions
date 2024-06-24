#include <bits/stdc++.h>
#define pb push_back
#define pp pop_back
#define pii pair<int, int>
#define vi vector<int>
#define vc vector<char>
#define vb vector<bool>
#define mii map<int, int>
#define mib map<int, bool>
#define mic map<int, char>
typedef long long ll;
typedef long long int lli;
#define loop(i, j, k) for (int i = j; i < k; i += 1)
#define rloop(i, j, k) for (int i = j; i >= k; i -= 1)
#define PI 3.1415926535897932384626433832795

using namespace std;

int solve()
{
    ll n;
    cin >> n;
    string str;
    cin >> str;
    if (n == 1) return 0;
    
    ll cnt0 = 0, cnt1 = 0;
    for (ll i = 0; i < n; i++)
    {
        if (str[i] == '0') cnt0++;
        else  cnt1++;
    }
    ll temp = abs(cnt0 - cnt1);
    if (n % 2 == 0)
    {
        if (temp >= 2) return 1;
        else return 0;
        
    }
    else
    {
        if (temp >= 2) return 0;
        else return 1;
        
    }

    return 0;
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
        if(solve() == 1){
            cout<<"Alice\n";
        }else cout<<"Bob\n";
    }

    return 0;
}