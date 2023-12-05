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
 
 int n,k;
 cin>>n>>k;
 vector<int> a(n,-1),b(n,-1);
 for(int i=0; i<n; i++){
    int x; cin>>x;
    a[i]= x;
 }
 b=a;
 sort(b.begin(), b.end());
//  sort(b,b+n);

 if(k!=1 || k==1 && a==b){
    cout<<"Yes\n";
 }else{
    cout<<"No\n";
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