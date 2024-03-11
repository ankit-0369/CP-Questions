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

int findCnt(string s, int c)
{
    int cnt = 0, cur = 1;
    int n = s.size();

    for (int i = 0; i + 1 < n; i++)
    {

        if (char(c + 'a') == s[i] && (s[i] == s[i + 1]))
        {

            cur++;
        }
        else
        {
            cnt = max(cur, cnt);
            cur = 1;
        }
    }

    cnt = max(cnt, cur);

    return cnt;
}

int solve()
{
    //  string s;
    //  cin>>s;
    // //  map<char, int> m1;
    //     int m1[26]= {0};
    //     int m2[26]= {0};
    //  for(auto ch:s) m1[ch-'a']++;
    //  for(int i=0; i<26; i++) if(m1[i] == 1) return 0;

    // for(int i=0; i<26; i++){

    //     int cnt= findCnt(s, i);
    //     if(m1[i]!= 0) m2[i]= cnt;

    // }
    // // for(int i=0; i<26; i++) cout<<m2[i]<<" ";
    // int m3[26]= {0};

    // for(int i=0; i<26; i++){
    //     if(m1[i]!= 0)
    //     m3[i]= m1[i] - m2[i];

    // }
    // int ans= 1e8;;

    // for(int i=0; i<26; i++) if(m3[i]!=0) ans= min(ans, m3[i]);

    // return ans;

    string s;
    cin >> s;
    int n = s.size();
    int ans = 1e8;
    for (int i = 0; i < 26; i++)
    {
        char x = 'a';
        x += i;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == x)
            {
                cnt++;
            }
        }
        if (cnt == 0)
        {
            continue;
        }
        int l = 0;
        int r = cnt - 1;
        int cntextra = 0;
        for (int i = l; i <= r; i++)
        {
            if (s[i] != x)
            {
                cntextra++;
            }
        }
        int ans = cntextra;
        while (r <= n - 1)
        {
            ans = min(ans, cntextra);
            if (s[l] != x)
            {
                cntextra--;
            }
            l++;
            r++;
            if (r <= n - 1 && s[r] != x)
            {
                cntextra++;
            }
        }
        ans = min(ans, ans);
    }

    return ans;
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
        cout << solve() << "\n";
    }

    return 0;
}