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
int cntBeauty(string s){
  int cur=1, ans=0;
  for(int i=1; i+1<s.size(); i++){
      if(s[i]==s[i-1]){
        cur+= 1;
      }else{
        ans= max(ans, cur);
        cur=1;
      }
  }

  ans= max(cur, ans);

  return ans;
}
void solve(){
 int ans=0;
 int n,q;
 cin>>n>>q;
 string s;
 cin>>s;
 for(int i=0; i<q; i++) {
  char ch; cin>>ch;
  s+= ch;
    cout<<cntBeauty(s)<<" ";
  }

 
cout<<endl;
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