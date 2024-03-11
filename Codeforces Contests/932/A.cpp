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
 int l= s.size();
 char c1, c2;
 int i=0, j= l-1;
 while(i<j){
    if(s[i] == s[j]){
        i++, j--;
    }else break;

 }

 c1= s[i], c2= s[j];
 if(c1<=c2){
    cout<<s<<"\n";
 }else{
    string r= s;
    reverse(s.begin(), s.end());
    s+=r;
    cout<<s<<"\n";
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