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

int solve(){
 int n;
  cin>>n;
  string s;
  cin>>s;
   long long cnt = n * (n + 1LL) / 2;
  map<int,int> mp;
  mp[0]++;
  int x1=0, x2=0;
  for(int i=0;i<n;i++){

   if(s[i]=='0') x1++;
   else x2++;
   
   if(mp.find(x1-x2)!= mp.end()){
        cnt+= mp[x1-x2];
        mp[x1-x2]++;
   }else{
        mp[x1-x2]= 1;
   }

  }

  cout<<cnt<<endl;
    return 0;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t;
cin>>t;
while(t--){
//  cout<<solve()<<"\n";
    solve();
}

return 0;
}