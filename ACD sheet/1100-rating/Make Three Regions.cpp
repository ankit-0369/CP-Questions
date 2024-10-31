/*
======================================================================== 
------------------------------- ॥  अहं ब्रह्मास्मि !  ॥--------------------------
=========================================================================
*/
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
#define all(v)   v.begin(), v.end()
#define rall(v)   v.rbegin(), v.rend() 
#define PI 3.1415926535897932384626433832795

using namespace std;

void solve(){
 int n; cin>>n;
 vector<string> v(2);
 cin>>v[0];
 cin>>v[1];
 int cnt= 0;
 for(int i=1; i+1<n; i++){
        if(v[0][i]=='.' && v[1][i-1] == 'x' && v[1][i+1] == 'x'){ cnt++; printf("%d %d \n", 0,i);}
        else if(v[1][i]=='.' && v[0][i-1] == 'x' && v[0][i+1] == 'x'){ cnt++; printf("%d %d \n", 1,i);}
    //     bool ok = true;
    //   ok &= (v[0][i] == '.' && v[1][i] == '.');
    //   ok &= (v[0][i - 1] != v[1][i - 1]);
    //   ok &= (v[0][i + 1] != v[1][i + 1]);
    //   ok &= (v[0][i - 1] == v[0][i + 1]);
    //   cnt += ok;
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