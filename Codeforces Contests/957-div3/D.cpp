#include <iostream>
#include <vector>
#include <queue>
#include <string>

using namespace std;

bool canReachRightBank(int n, int m, int k, const string& river) {
    // Using a queue to perform BFS
    queue<pair<int, int>> q; // (position, remaining swim distance)
    vector<bool> visited(n + 2, false); // Track visited positions

    // Start from the left bank (position 0)
    q.push({0, k});
    visited[0] = true;

    while (!q.empty()) {
        int pos = q.front().first;
        int remainingSwim= q.front().second;
        q.pop();

        // Check if we've reached the right bank
        if (pos == n + 1) {
            return true;
        }

        // Jump to positions within range
        for (int jump = 1; jump <= m; ++jump) {
            int newPos = pos + jump;
            if (newPos <= n + 1 && !visited[newPos]) {
                if (newPos == n + 1 || river[newPos - 1] == 'L' || river[newPos - 1] == 'W') {
                    if (newPos == n + 1 || river[newPos - 1] == 'L') {
                        q.push({newPos, remainingSwim});
                    } else if (remainingSwim > 0) {
                        q.push({newPos, remainingSwim - 1});
                    }
                    visited[newPos] = true;
                }
            }
        }

        // Swim to the next position
        if (pos > 0 && pos <= n && river[pos - 1] == 'W' && remainingSwim > 0 && !visited[pos + 1]) {
            q.push({pos + 1, remainingSwim - 1});
            visited[pos + 1] = true;
        }
    }

    return false;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        string river;
        cin >> river;

        if (canReachRightBank(n, m, k, river)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
