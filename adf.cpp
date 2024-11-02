#include<bits/stdc++.h>
using namespace std;

int firstSubsequenceIndex(const string &s1, const string &s2) {
    int n = s1.size();
    int m = s2.size();

    if (m > n) return -1;

   
    vector<vector<bool>> dp(n + 1, vector<bool>(m + 1, false));

    for (int i = 0; i <= n; ++i) {
        dp[i][0] = true;
    }


    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (s1[i - 1] == s2[j - 1] || dp[i - 1][j - 1]) {
                dp[i][j] = dp[i - 1][j - 1];
            }
            if (dp[i - 1][j]) {
                dp[i][j] = true;
            }
        }
    }

    for (int i = 0; i <= n - m; ++i) {
        int changes = 0;
        for (int j = 0; j < m; ++j) {
            if (s1[i + j] != s2[j]) {
                ++changes;
            }
            if (changes > 1) {
                break;
            }
        }
        if (changes <= 1) {
            return i;
        }
    }

 return -1;
}

int main(){

    string a, b;
    cin>>a>>b;
    cout<<firstSubsequenceIndex(a,b)<<"\n";

    return 0;
}















// #include <iostream>
// #include <string>

// using namespace std;

// int findFirstSubsequence(string str1, string str2) {
//     int m = str1.length();
//     int n = str2.length();

//     for (int i = 0; i < m; ++i) {
//         if (i + n > m) {
//             break;
//         }
//         int mismatch_count = 0;
//         int k = 0;
//         for (int j = i; j < m; ++j) {
//             if (str1[j] == str2[k]) {
//                 ++k;
//                 if (k == n) {
//                     return i + 1; // 1-based index
//                 }
//             } else if (mismatch_count == 0 && k > 0) {
//                 ++mismatch_count;
//                 ++k;
//                 if (k == n) {
//                     return i + 1; // 1-based index
//                 }
//             }
//             if (k == n) {
//                 break;
//             }
//         }
//     }
//     return -1;
// }

// int main() {
//     string A = "afkwlfkwmoonafwefissdgnfsgreatwsdflkdsf";
//     string B = "moonisgreat";
//     cout << findFirstSubsequence(A, B) << endl; // Output: 1
//     return 0;
// }