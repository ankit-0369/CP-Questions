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
 lli n,m,x0,y0,l;
 cin>>n>>m>>x0>>y0>>l;
 n--, m--, x0--, y0--;
lli left= y0/l;
lli right= (m-y0)/l;
lli up= x0/l;
lli bot= (n-x0)/l;

 lli r= left + right + 1;
 lli c= up + bot +1;
 cout<<r*c<<"\n";
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