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


int getMax(int index, string s){

   int notake= getMax(index-1, s);
   int take= 0;
   if(isUnique()){
      take+= solve(index-1, s);
   }

   return take+ notake;
}

int solve(){
 string s;
 cin>>s;
 int ans= getMax(s.size()-1, s);
return ans;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t;
cin>>t;
while(t--){
  cout<<solve()<<"\n";
}

return 0;
}