#include <iostream>
#include <string>
using namespace std;

int rep_five(int n) {
    string s = to_string(n);
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '5') {
            s[i] = '6';
        }
    }
    return stoi(s);
}
int rep_six(int n) {
    string s = to_string(n);
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '6') {
            s[i] = '5';
        }
    }
    return stoi(s);
}

int main() {
    int X, Y;
    cin >> X >> Y;
    int minSum = rep_six(X) + rep_six(Y);
    int maxSum = rep_five(X) + rep_five(Y);
    cout << minSum << " " << maxSum << endl;

    return 0;
}
