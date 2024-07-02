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
 int n,m; cin>>n>>m;
 int a[n]= {0}, b[n]= {0};
 for(int i=0; i<n; i++){
    int x;
    cin>>x;
    a[i]= (x%m);
 }
 map<int, int> mp;
 for(int i=0; i<n; i++){
    int x;
    cin>>x;
    x= x%m;
    mp[x]++;
 }

//  sort(a, a+n);
//  for(auto n: mp) cout<<n.first<<" "<<n.second<<"\n";
 lli ans= 0;
 for(int i=0; i<n; i++){
    int tar= m-a[i];
 
    if(mp.find(tar)!= mp.end()){
      ans+= mp[tar];
    
    }
      if(a[i] == 0 && mp.find(0)!= mp.end()){
          ans+= mp[0];
      }
    
 }

cout<<ans<<"\n";



//  for(int i=0; i<n; i++){
//     for(int j=0; j<n; j++){
//         if((a[i] + b[j])%m == 0) ans++;
//     }
//  }
//  cout<<ans<<"\n";
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