// #include <iostream>
// #include <vector>
// #include <string>
// #include <algorithm>
// using namespace std;

// bool isSubsequence(const string& S1, const string& Q) {
//     int n = S1.size();
//     int m = Q.size();
//     int i = 0, j = 0;
//     while (i < n && j < m) {
//         if (S1[i] == Q[j]) {
//             i++;
//         }
//         j++;
//     }
//     return i == n;
// }

// void solve() {
//     int t;
//     cin >> t;
    
//     while (t--) {
//         int n, m;
//         cin >> n >> m;
        
//         string S1, S2;
//         cin >> S1 >> S2;
        
//         vector<int> P(m);
//         for (int i = 0; i < m; ++i) {
//             cin >> P[i];
//             P[i]--; 
//         }
        
//         string Q(m, '*');
//         int earliestTime = -1;
        
//         for (int t = 0; t < m; ++t) {
//             Q[P[t]] = S2[t];
//             if (isSubsequence(S1, Q)) {
//                 earliestTime = t + 1;
//                 break;
//             }
//         }
        
//         cout << earliestTime << endl;
//     }
// }

// int main() {
//      solve();
    
//  return 0;
// }





// string ans="";
// if(s1.length()>s2.length) return -1;
// for(int i=0;i<s2.length();i++){
//     if(ans.length()<N){
//         ans.push_back(s2[P[i]]);
//     }
//     else{
//     if (ans.contains(s1)) return i+1;
//     else ans.push_back(s2[P[i]]);
//     }
//     return -1;
// }










// XOR:
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int calculateOR(const vector<int>& arr, int start, int end) {
    int result = 0;
    for (int i = start; i <= end; ++i) {
        result |= arr[i];
    }
    return result;
}


int maxFValue(vector<int>& A, int N, int K) {
    int maxF = 0;
    
    
    for (int i = 0; i < (1 << N); ++i) {
        vector<int> subsequence;
        for (int j = 0; j < N; ++j) {
            if (i & (1 << j)) {
                subsequence.push_back(A[j]);
            }
        }
        
        
        if (subsequence.size() == 2 * K) {
            int part1OR = calculateOR(subsequence, 0, K - 1);
            int part2OR = calculateOR(subsequence, K, 2 * K - 1);
            int F = part1OR ^ part2OR;
            maxF = max(maxF, F);
        }
    }
    
    return maxF;
}

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    cout << maxFValue(A, N, K) << endl;

    return 0;
}