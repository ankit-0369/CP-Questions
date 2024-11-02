#include<bits/stdc++.h>
#define pb push_back
#define pp pop_back
#define pii pair<int,int>
#define vi vector<int>
#define vc vector<char>
#define vb vector<bool>
#define mii map<int,int>
#define mib map<int, bool>
#define mic map<int,char>
typedef long long ll;
typedef long long int lli;
#define loop(i, j, k) for (int i = j; i < k; i += 1)
#define rloop(i, j, k) for (int i = j; i >= k; i -= 1)
#define PI 3.1415926535897932384626433832795

using namespace std;


void solve() {
    int n; 
    cin >> n;
    vector<pair<int, int>> vp(n);
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        vp[i] = {a, b};
    }

    double L = 0.0;         
    double U = 1e18;       
    bool impossible = false;

    for (int i = 0; i < n; i++) {
        int Ai = vp[i].first;
        int Bi = vp[i].second;
        int idx = i + 1;    

        if (Bi == 0) {
         
            if (Ai != 0) {
                
                impossible = true;
                break;
            } else {
            
                L = 1e18;
            }
        } else {
            double lower_i = (double)idx / Bi;
            L = max(L, lower_i);
            if (Ai > 0) {
                double upper_i = (double)idx / Ai;
                U = min(U, upper_i);
            }
        }
    }

    if (impossible || (L - U > 1e-9)) {
        cout << "-1" << endl;
    } else {
        cout << fixed << setprecision(10) << L << endl;
    }
}

int main(){
    // Redirect standard input to read from the input file
    freopen("input.txt", "r", stdin);
    
    // Redirect standard output to write to the output file
    freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}
