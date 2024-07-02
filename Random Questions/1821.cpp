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
 int a[n], b[n];
 for(auto &x:a) cin>>x;
 for(auto &x:b) cin>>x;
 int dl= -1, dr= -1;
 for(int i=0; i+1<n; i++){
    if(a[i]!= b[i]){
        dr= i;
        if(dl == -1) dl= i;
    }       
 }

while(dl>0 && b[dl-1] <= b[dl]) dl--;
while(dr+1<n && b[dr+1]>= b[dr]) dr++;
cout<<dl+1<<" "<<dr+1<<"\n";
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