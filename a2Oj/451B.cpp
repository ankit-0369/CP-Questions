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
 cin>>n;
 vector<int> a(n,-1);
loop(i,0,n) cin>>a[i];
vector<int> b= a;
int l=0, r= 0;
sort(b.begin(), b.end());
loop(i,0,n){
    if(a[i]!= b[i]){
        l=i;
        break;
    } 
}
for(int i=n-1; i>=0; i--){
    if(a[i]!=b[i]){
        r=i;
        break;
    }
}

reverse(a.begin()+l, a.begin()+r+1);

if(a==b){
    cout<<"yes\n";
    cout<<l+1<<" "<<r+1;
}else{
    cout<<"no";
}



return;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t;
// cin>>t;
t=1;
while(t--){
  solve();
}

return 0;
}