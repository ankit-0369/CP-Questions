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
    bool flag = false;
    cin >> n;
    int a[n] = {0};
    int d[n];
    loop(i,0,n) cin>>d[i];
    a[0]= d[0];
    for (int i = 1; i < n; i++)
    {
        
        if (d[i]!= 0 && a[i-1] - d[i] >= 0)
        {
            flag = true;
            cout << -1 << "\n";
            break;
        }
        else
        {
            a[i]= a[i-1]+ d[i];
            
        }
    }
    if (!flag)
    {
        for (int i = 0; i<n; i++)
            cout << a[i]<<" ";
        cout << endl;
       
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