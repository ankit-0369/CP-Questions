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
 string s;
 cin>>s;
string sub1= "pie", sub2= "map", sub3= "mapie";
int cnt=0;
for(int i=0; i<n; i++){
    if(s.substr(i, 3) == sub1) cnt++;
}
for(int i=0; i<n; i++){
    if(s.substr(i,3) == sub2) cnt++;
}

for(int i=0; i<n; i++){
    if(s.substr(i,5) == sub3) cnt--;
}

cout<<cnt<<"\n";

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