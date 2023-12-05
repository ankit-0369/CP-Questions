#include <iostream>
#include <vector>
using namespace std;

int findMin(vector<pair<int, int>>& seg) {
    int s = 0, e = 1e9; 

    while (s < e) {
        int m = (s + e) / 2;
        bool check = true;

        int mini = 0, maxi = 0; 

        for (const auto& s : seg) {
            mini = max(mini, s.first);
            maxi = min(maxi + m, s.second);

            if (mini > maxi) {
                check = false;
                break;
            }

            mini = max(mini - m, 0);
        }

        if (check) {
            e = m;
        } else {
            s = m + 1;
        }
    }

    return s;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<pair<int, int>> seg(n);
        for (int i = 0; i < n; ++i) {
            int lower, right;
            cin >> lower >> right;
           
            seg.push_back({lower, right});
        }

        int result = findMin(seg);
        cout << result <<"\n";
    }

    return 0;
}