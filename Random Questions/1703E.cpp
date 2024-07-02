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
 int a[n][n];
 for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            char c;
            cin >> c;
            a[i][j] = c-'0';
        }
    }
 int ans= 0;
 for(int i=0; i<(n+1)/2; i++){
    for(int j=0; j<(n/2); j++){

       int nowi = i, nowj = j;
            int oldnowj = nowj;
            int sum = a[nowi][nowj];
            nowj = n-nowi-1;
            nowi = oldnowj;
            sum+=a[nowi][nowj];
            oldnowj = nowj;
            nowj = n-nowi-1;
            nowi = oldnowj;
            sum+=a[nowi][nowj];
            oldnowj = nowj;
            nowj = n-nowi-1;
            nowi = oldnowj;
            sum+=a[nowi][nowj];
            ans+=min(sum, 4-sum);
    }

 }
  cout<<ans<<"\n";
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