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

void solve(){
  int n;
        lli k;
        cin >> n >> k; 
        vector<lli> arr(n); 
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        bool same = true;
        for (auto ele: arr) {
            if (ele != k) {
                same = false;
                break;
            }
        }

        if (same == 1) {
            cout << 0 << endl;  
        } else {
          
            int srt = -1, end = n;
            for (int i = 0; i < n; i++) {
                if (arr[i] != k) {
                    if (srt == -1) srt = i;
                    end = i;
                }
            }

          
            if (srt != end) {

                 bool xorequal = true, divisible = true;
                long long firstXOR = (arr[srt] ^ k);
                for (int i = srt; i <= end; i++) {
                    if (arr[i] % k != 0) divisible = false;
                    if ((arr[i] ^ k) != firstXOR) xorequal = false;
                }

                if (xorequal || divisible) {
                    cout << 1 << endl;
                } else {
                    cout << 2 << endl;
                }

               
            } else {
                cout << 1 << endl;
            }
        }

        return;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t;
cin>>t;
while(t--){
  solve();
}

return 0;
}