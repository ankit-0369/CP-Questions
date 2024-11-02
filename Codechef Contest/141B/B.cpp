#include <bits/stdc++.h>
using namespace std;

bool canEscape(int H, int A, int B, int K) {
    if (A >= H) {
        return true; 
    }
    if (A <= B) {
        return false; 
    }

    
    int net_gain_per_cycle = A - B;
    int full_cycles = (H - A + net_gain_per_cycle - 1) / net_gain_per_cycle; // 

    
    if (full_cycles + 1 <= K) {
        return true;
    } else {
        return false;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        int n, k, h;
        cin >> n >> k >> h;
        long long ans = 0;

        for (int A = 1; A <= n; ++A) {
            int lo = 1, hi = n, res = 0;
            while (lo <= hi) {
                int B = (lo + hi) / 2;
                if (canEscape(h, A, B, k)) {
                    res = B; 
                    lo = B + 1; 
                } else {
                    hi = B - 1; 
                }
            }
            ans += res;
        }

        cout << ans << endl;
    }

return 0;
}