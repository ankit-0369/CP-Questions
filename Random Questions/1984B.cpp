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
 lli x; cin>>x;
 string s= to_string(x);
 int n= s.size();
 lli x2=0;
//  cout<<n;
 while(n!= 1){
    x2= x2*10 + 9;
    n--;
 }
 x2+= x2;

 if(x>x2) return false;

  int c= 0;
  while(x!= 1){
    int d= x%10-c;
   
    c=1;
    if(d<0 || d == 9) return false;
    x/=10;
  }

return true;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t;
cin>>t;
while(t--){
  if(solve()){
    cout<<"YES\n";
  }else cout<<"NO\n";
}

return 0;
}