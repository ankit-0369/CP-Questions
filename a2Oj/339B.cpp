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

lli solve(){
 int n,m;
 cin>>n>>m;
 lli ans=0;
 lli s=1;
 for(int i=0; i<m; i++){
    lli e;
    cin>>e;
    if(e>=s){
        ans+= (lli)(e-s);
       
    }else{
        ans+=(lli) (n-s) + (e);
       
    }
     s=e;
 }

return ans;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t; 
t=1;
// cin>>t;

while(t--){
  cout<<solve();
}

return 0;
}