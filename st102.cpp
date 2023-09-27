#include <iostream>
#include <vector>

using namespace std;

void solve(int N, int K) {

 if (N % 2 == 1 || K < (N / 2) + (N / 2 - 1)) {
 cout << "-1\n";
 return;
 }


 vector<int> A(N, 0);
 int remainingSum = K - ((N / 2) + (N / 2 - 1));
 for (int i = 0; i < N / 2; i++) {
 A[i] = 1;
 }
 for (int i = N / 2; i < N - 1; i++) {
 A[i] = 2;
 }


 A[N - 1] = remainingSum;


 for (int i = 0; i < N; i++) {
 cout << A[i] << " ";
 }
 cout << "\n";
}

int main() {
 int T;
 cin >> T;

 while (T--) {
int N, K;
 cin >> N >> K;

 solve(N, K);
 }

 return 0;
}