#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solve(int n, int k, vector<int> a) {
    if (n < 2 * k) return 0;

    vector<int> preOr(n), sufOr(n);
    
    preOr[0] = a[0];
    for (int i = 1; i < n; ++i) {
        preOr[i] = preOr[i - 1] | a[i];
    }
    
    sufOr[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; --i) {
        sufOr[i] = sufOr[i + 1] | a[i];
    }
    
    int maxi = 0;
    for (int i = 0; i <= n - 2 * k; ++i) {
        int or1 = preOr[i + k - 1];
        int or2 = sufOr[i + k];
        int current_value = or1 ^ or2;
        maxi = max(maxi, current_value);
    }

    return maxi;
}

int main() {
    int n = 5, k = 2;
    vector<int> A = {1, 2, 4, 8, 16};

    cout << solve(n, k, A) << endl;
 return 0;
}