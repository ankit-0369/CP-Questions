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
 int n; cin>>n;
 int a[n];
 for(int i=0; i<n; i++){
    cin>>a[i];
 }
 sort(a, a+n);
 long long cur= 1;
    for(int i=0; i<n; i++){
        if(a[i]<=cur){
            cur= 1LL*(cur+a[i]);
        }else{
            break;
        }
    }
    cout<<cur;
return;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t= 1;
// cin>>t;
while(t--){
  solve();
}

return 0;
}