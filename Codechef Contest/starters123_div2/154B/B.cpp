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
    lli n, k;
    cin >> n >> k;
    lli a[n];
    for (auto &x : a)
        cin >> x;

    unordered_map<lli, int> cntgcd;
    unordered_map<lli, int> cntxor;
    bool all_equal = true;
    for (lli i = 0; i < n; ++i)
    {
        lli val = a[i];
        if (val != k)
        {
            all_equal = false;
            if (k != 0 && val % k == 0)
            {
                lli x = val ^ k;
                cntgcd[x]++;
            }
            else
            {
                lli x = val ^ k;
                cntxor[x]++;
            }
        }
    }
    if (all_equal)
    {
        std::cout << 0 << '\n';
        return;
    }
   int x = cntgcd.size();
int y = cntxor.size();

int op1 = cntgcd.empty() ? y : 1 + y;


int op2 = x + y;


std::cout << std::min(op1, op2) << '\n';

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