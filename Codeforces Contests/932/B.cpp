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
    int arr[n];
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    int j = 0;
    set<int> s1, s2;
    while (mp[j] >= 2) s1.insert(j), s2.insert(j++);
    if (mp[j] > 0) cout << -1 << endl;
    else
    {
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            if (s1.find(arr[i]) != s1.end()) s1.erase(arr[i]);
            if (s1.size() == 0)
                { x = i + 1;
                 break;
                }
        }
        int i=x;
        while(i<n)
        {
            if (s2.find(arr[i]) != s2.end())
                s2.erase(arr[i]);
            i++;
        }
        if (s2.size() == 0)
        {
            cout << 2 << endl;
            cout << 1 << " " << x << endl;
            cout << x + 1 << " " << n << endl;
        }
        else cout << -1 << endl;
    }

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