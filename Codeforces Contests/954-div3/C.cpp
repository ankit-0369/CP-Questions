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
 string s, c;
 cin>>s;
 int a[m];
 for(int i=0; i<m; i++) cin>>a[i];
 cin>>c;
 map<int, int> hash;
 for(int i=0; i<m; i++)  hash[a[i]]++;
 
 int ext= 0;
 for(auto val= hash.begin(); val!= hash.end(); val++){
    ext+= val->second-1;
 }
 sort(c.begin(), c.end());
string s2;
for(int i=0; i<m-ext; i++){
    char ch= c[i];
    s2.push_back(ch);
}
int i=0;
for(auto val= hash.begin(); val!= hash.end(); val++){
    int ind= val->first;
    s[ind-1]= s2[i++];
}

cout<<s<<"\n";

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