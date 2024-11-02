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

void solve()
{
    int n;
    cin >> n;
    string S;
    cin >> S;

    int n1 = 0, n0 = 0;
    for (char c : S)
    {
        if (c == '1')
        {
            n1++;
        }
        else
        {
            n0++;
        }
    }
    int res;
    if (n1 == 0)
    {
        res = 0;
    }
    else if (n1 % 2 == 0)
    {
        res = n0;
    }
    else
    {
        res = 1;
    }

    cout << res << "\n";
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