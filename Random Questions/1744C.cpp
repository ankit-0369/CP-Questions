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

int bs(vector<int> g, int x){

    int s= 0, e= g.size()-1, ans= 0;
    while(s<=e){
        int m= s+ (e-s)/2;
        if(g[m]>=x){
            ans= g[m];
            e= m-1;
        }else{
            s= m+1;
        }
    }
    return ans;
}

void solve(){
 int n; cin>>n;
 char c; cin>>c;
 string s; cin>>s;
 s+= s;
 vector<int> g;
 for(int i=0; i<s.size(); i++){
    if(s[i] == 'g'){
        g.push_back(i);
    }
 }
  
    int ans= 0;
 for(int i=0; i<n; i++){
    
      if(s[i] == c){
        int mx= bs(g, i)-i;
        ans= max(ans, mx);
      }
           
    }
  cout<<ans<<"\n";

// int i= s.size()-1, last= s.size();
// int ans= 0;
// while(i--){
//     if(s[i] == 'g'){
//         last= i;
//     }else if(s[i] == c){
//         ans= max(ans, (last-i));
//     }
// }

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