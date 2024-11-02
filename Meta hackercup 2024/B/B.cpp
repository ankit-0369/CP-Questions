#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 10000000;
vector<bool> is_prime(2 * MAX_N + 1, true);
vector<int> primes; // Primes up to N
vector<bool> is_subtractorization(MAX_N + 1, false);
vector<int> cumulative_count(MAX_N + 1, 0);

void sieve(int N) {
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= 2 * N; i++) {
        if (is_prime[i]) {
            if (i <= N) primes.push_back(i); // Store primes up to N
            if (1LL * i * i <= 2 * N) {
                for (int j = i * i; j <= 2 * N; j += i) {
                    is_prime[j] = false;
                }
            }
        }
    }
}

void precompute(int N) {
    unordered_set<int> primesSet(primes.begin(), primes.end());

    // For each prime s (s = p + r)
    for (int s = 2; s <= 2 * N; ++s) {
        if (!is_prime[s]) continue;
        // For each prime r less than s
        for (int r : primes) {
            if (r >= s) break;
            int p = s - r;
            if (p > N) continue; // p should be <= N
            if (primesSet.count(p)) {
                is_subtractorization[p] = true;
            }
        }
    }

    // Build cumulative count
    int count = 0;
    for (int i = 2; i <= N; ++i) {
        if (is_subtractorization[i]) {
            count++;
        }
        cumulative_count[i] = count;
    }
}

void solve(int case_num, int N) {
    int result = cumulative_count[N];
    cout << "Case #" << case_num << ": " << result << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    vector<int> Ns(t);
    int max_N = 0;
    for (int i = 0; i < t; ++i) {
        cin >> Ns[i];
        max_N = max(max_N, Ns[i]);
    }

    sieve(max_N);
    precompute(max_N);

    for (int i = 0; i < t; ++i) {
        solve(i + 1, Ns[i]);
    }

    return 0;
}
