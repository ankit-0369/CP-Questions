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

bool solve(){
 int n; cin>>n;
 
  vector<int> v; v.push_back(-1);
  int x1, x2;
  cin>>x1>>x2;

    if(x1>=x2){
         int d2= x1%10;
        x1/=10;
        int d1= x1%10;
        v.push_back(d1);
        v.pb(d2);
       
    }else v.pb(x1);
     v.pb(x2);

 for(int i=2; i<n; i++)
 {
    int x;
    cin>>x;
    if(x>=10 && x<=v.back()  ){
        int d2= x%10;
        x/=10;
        int d1= x%10;
        v.push_back(d1);
        v.pb(d2);
    }else{
        v.pb(x);
    }
    
 }

 vector<int> v2= v;
 sort(v.begin(), v.end());
    // for(auto val: v2) cout<<val<<" ";
    // cout<<endl;

 
return (v2 == v);
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t;
cin>>t;
while(t--){
 if( solve()){
    cout<<"YES\n";
 }else cout<<"NO\n";
}

return 0;
}