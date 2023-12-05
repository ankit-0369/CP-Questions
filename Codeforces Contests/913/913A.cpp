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
  
   string s;
   cin>>s;
   for(int i=1; i<=8; i++){
    if(i!=s[1]-'0')
    cout<<s[0]<<i<<"\n";
   }
   for(int i=0; i<8; i++){
    if(i!= s[0]-'a')
    cout<<char('a'+i)<<s[1]<<"\n";
       }
return;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t;
cin>>t;
// t=1;
while(t--){
  solve();
//   cout<<solve()<<"\n";
}

return 0;
}