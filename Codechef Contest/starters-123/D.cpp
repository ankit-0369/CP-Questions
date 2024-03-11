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
    lli total;
    cin >> total;
    lli b = 0;
    if (total&1)
    {
       

        int x = total/2+1;
        total = total/2;
        b+= (total *(total + 1))/2;
        b*= 2;
        b+= x;
    }
    else
    {
         total= total / 2;
        b+= (total*(total + 1))/2;
        b*= 2;
    }
    cout<<b<<"\n";
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