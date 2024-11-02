#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int solve(int N, vector<int> &A) {
    unordered_map<int, int> divisibilityCount;

    // Counting how many numbers in A are divisible by each element of A
    for (int i = 0; i < N; ++i) {
        for (int j = 1; j <= A[i]; ++j) {
            if (A[i] % j == 0) {
                divisibilityCount[j]++;
            }
        }
    }

    int result = -1;

    // Check the special condition for each key in divisibilityCount
    for (const auto &pair : divisibilityCount) {
        if (pair.first == pair.second) {
            result = max(result, pair.first);
        }
    }

    return result == -1 ? -1 : result;
}

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    
    for(int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    cout << solve(N, A) << endl;
    return 0;
}