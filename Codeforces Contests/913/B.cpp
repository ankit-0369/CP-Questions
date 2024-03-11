#include <bits/stdc++.h>
using namespace std;
#define int long long int

signed main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n + 1), b(n + 1);

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        multiset<pair<int, int>> mset;
        for (int i = 1; i <= n; i++)
        {
            cin >> b[i];
            pair<int, int> p = make_pair(abs(b[i]), a[i]);
            mset.insert(p);
        }
        int x = 0;
        bool flag = 1;
        while (!mset.empty())
        {
            int cur = k;
            while (!mset.empty() && cur > 0)
            {
                pair<int, int> p = *mset.begin();

                if (p.first - x <= 0)
                {
                    flag = 0;
                }
                mset.erase(mset.begin());

                if (cur < p.second)
                {
                    

                    mset.insert({p.first, p.second-cur});
                    cur = 0;
                    break;
                }
                else
                    cur -= p.second;
            }
            x++;
        }
        cout << (flag ? "YES\n" : "NO\n");
    }
    return 0;
}