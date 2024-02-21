
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define MOD 1000000007

int power(int b, int exp) {
    int res = 1;
    while (exp > 0) {
        if (exp & 1) {
            res = (res * b) % MOD;
        }
        b = (b * b) % MOD;
        exp >>= 1;
    }
    return res;
}

string binaryRep(int n) {
    string str = "";
    while (n != 0) {
        if (n & 1) {
            str += '1';
        } else {
            str += '0';
        }
        n >>= 1;
    }
    reverse(str.begin(), str.end());
    return str;
}

void solve() {
    int n;
    cin >> n;

    string b_rep = binaryRep(n);
    string p = "11";
    int pp = 0;
    int ps = 0;

    for (int i = 0; i < b_rep.length(); i++) {
        if (b_rep[i] == p[pp]) {
            pp++;
            if (pp == 2) {
                ps = i + 1;
                break;
            }
        }
    }

    if (pp <= 1) {
        cout << 1 << endl;
        return;
    }

    int cntZ = 0;
    for (int i = ps; i < b_rep.length(); i++) {
        if (b_rep[i] == '0') {
            cntZ++;
        }
    }

    cout << power(2, cntZ) << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        solve();
    }

    return 0;
}