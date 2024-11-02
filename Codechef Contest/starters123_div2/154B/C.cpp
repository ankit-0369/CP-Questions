#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    
    sort(a.begin(), a.end());
    set<int> validx;
    
   
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int left = a[j] - a[i] + 1;  
            int right = a[i] + a[j] - 1;
            
           
            for (int x = left; x <= right; ++x) {
                validx.insert(x);
            }
        }
    }
    
  
    cout << validx.size() << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
