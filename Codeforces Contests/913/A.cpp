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
    int n,ans=0; cin>>n;
    vector<int>a;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        a.push_back(x);
    }
     int b = -1, l = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == 1 && b==-1) {
           b=i;
            
        }
        if(a[i] == 1) l= i;
    }

    int z = 0;
    for (int i = b + 1; i < l; i++) {
        if (a[i] == 0) {
            z++;
        }
    }
cout<<z<<"\n";
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