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
 string a, b;
 cin>>a;
 cin>>b;
//  int lcsLen= lcs(a, b);
int l1= a.size(), l2= b.size(), ans= l2;
loop(i,0,l2){
  int cur= i, j= i;
  loop(k,0,l1){
      if(a[k] == b[j]){
        j++;
      }
      if(j == l2) break;
  }

  int left= cur+l2-j;
  ans= min(ans, left);
}

cout<<ans+l1<<"\n";


//  cout<<(a.size() + (b.size()-lcsLen))<<"\n";
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