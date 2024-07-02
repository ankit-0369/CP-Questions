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

lli bs(vector<lli> a, lli x){
lli s= 0, e= a.size()-1;
  lli ans= -1;
  while(s<=e){
    lli m= s+ (e-s)/2;
    if(a[m] <=x){
      ans= a[m];
      s= m+1;
    }else{
        e= m-1;
    } 
  }

  return ans;
}

void solve(){
 int n; cin>>n;
 int a[n];
 for(auto &x: a) cin>>x;
//  for(auto &x: a) cout<<x<<" ";
  vector<int> ind;
 lli ans= 0;
 for(int i=0; i<n; i++){
    if (a[i] >= i+1) {continue;}
     ans+= (lli)(lower_bound(ind.begin(), ind.end(), a[i]) - ind.begin());
     ind.push_back(i+1);
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