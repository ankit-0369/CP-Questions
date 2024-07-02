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
 lli x; cin>>x;
 lli n=0, rev= 0;
 string s= to_string(x);

 if(s[0] != '9'){
    int d= s[0]-'0';
    s[0]= (min(d, 9-d))+'0';
 }
 int i=1;
 while(i<s.size()){
    int d= s[i]-'0';
    s[i]= (min(d, 9-d))+'0';
    i++;
 }

 cout<<s;
return;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t=1;
// cin>>t;
while(t--){
  solve();
}

return 0;
}