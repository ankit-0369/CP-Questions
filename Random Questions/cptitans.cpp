// // // // /* ------------ ॥ अंतः अस्ति प्रारंभः ॥-------    */
// // // // #include<bits/stdc++.h>
// // // // #define ll long long int

// // // // using namespace std;


// // // // double nthRoot(int A, int N)
// // // // {
// // // //     // initially guessing a random number between
// // // //     // 0 and 9
// // // //     double xPre = rand() % 10;
 
// // // //     //  smaller eps, denotes more accuracy
// // // //     double eps = 1e-3;
 
// // // //     // initializing difference between two
// // // //     // roots by INT_MAX
// // // //     double delX = INT_MAX;
 
// // // //     //  xK denotes current value of x
// // // //     double xK;
 
// // // //     //  loop until we reach desired accuracy
// // // //     while (delX > eps)
// // // //     {
// // // //         //  calculating current value from previous
// // // //         // value by newton's method
// // // //         xK = ((N - 1.0) * xPre +
// // // //               (double)A/pow(xPre, N-1)) / (double)N;
// // // //         delX = abs(xK - xPre);
// // // //         xPre = xK;
// // // //     }
 
// // // //     return xK;
// // // // }

// // // // int main(){
    
// // // // return 0;
// // // // }



















// // // #include <iostream>
// // // #include <vector>
// // // #include <map>
// // // #include <cmath>

// // // typedef long long ll;

// // // int countInterestingPairs(std::vector<ll>& matches, int P) {
// // //     std::map<ll, int> frequency;

// // //     int count = 0;
// // //     for (ll match : matches) {
// // //         ll power = 1;
// // //         for (int i = 1; i <= P; i++) {
// // //             power *= match;
// // //         }

// // //         count += frequency[power];
// // //         frequency[power]++;
// // //     }

// // //     return count;
// // // }

// // // int main() {
// // //     int N, P;
// // //     std::cin >> N >> P;

// // //     std::vector<ll> matches(N);
// // //     for (int i = 0; i < N; i++) {
// // //         std::cin >> matches[i];
// // //     }

// // //     int result = countInterestingPairs(matches, P);
// // //     std::cout << result << std::endl;

// // //     return 0;
// // // }





// // #include <bits/stdc++.h>
// // using namespace std;

// // int main() {
// //   int n, p;
// //   cin >> n >> p;
// //   vector<int> r(n);
// //   for (int i = 0; i < n; i++) {
// //     cin >> r[i];
// //   }

// //   vector<int> qs;
// //   for (int i = 1; i <= 10000; i++) {
// //     qs.push_back(pow(i, 1.0 / p));
// //   }

// //   int ans = 0;
// //   for (int i = 0; i < n; i++) {
// //     for (int j = i + 1; j < n; j++) {
// //       int pq = r[i] * r[j];
// //       int q = lower_bound(qs.begin(), qs.end(), pq) - qs.begin();
// //       if (qs[q] * qs[q] == pq) {
// //         ans++;
// //       }
// //     }
// //   }

// //   cout << ans << endl;
// //   return 0;
// // }











// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int n, p;
//   cin >> n >> p;
//   vector<int> r(n);
//   for (int i = 0; i < n; i++) {
//     cin >> r[i];
//   }

//   vector<int> qs;
//   for (int i = 1; i <= 10000; i++) {
//     if (pow(i,2) % 1 == 0) {
//       qs.push_back(pow(i, 1.0 / p));
//     }
//   }

//   int ans = 0;
//   for (int i = 0; i < n; i++) {
//     for (int j = i + 1; j < n; j++) {
//       int pq = r[i] * r[j];
//       int q = lower_bound(qs.begin(), qs.end(), pq) - qs.begin();
//       if (q != qs.size() && qs[q] * qs[q] == pq) {
//         ans++;
//       }
//     }
//   }

//   cout << ans << endl;
//   return 0;
// }




