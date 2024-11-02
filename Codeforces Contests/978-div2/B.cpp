#include <iostream>
#include <queue>
#include <string>
using namespace std;

void solve(int N) {
    queue<string> q;
    q.push("9");

    while (!q.empty()) {
        string num = q.front();
        q.pop();
        long long int number = stoll(num);
        if (number % N == 0) {
            cout << num << endl;
            return;
        }
        q.push(num + "0");
        q.push(num + "9");
    }
}

int main() {
    int t, n;
    cin >> t;
    
    while (t--) {
        cin >> n;
        solve(n);
    }

    return 0;
}
