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
bool isPos(lli h, lli a, lli b, lli k){
     if (a >= h) {
        return true; 
    }
    if (a <= b) {
        return false; 
    }

    
    int temp = a - b;
    int temp2 = (h - a + temp - 1) / temp; 
    if (temp2 + 1 <= k) {
        return true;
    } 

    return false;
}
void solve(){
 lli n,k,h; cin>>n>>k>>h;
 lli ans= 0;

 for(lli i=1; i<=n; i++){

    lli s= 1, e= n;
    lli res= 0;
    while(s<=e){
      lli m= s+(e-s)/2;
      if(isPos(h,i,m, k)){
          res= m;
        s= m+1;
      
      }else{
          e= m-1;
      }
      
    }
    ans+= res;
 }

 cout<<ans<<"\n";
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