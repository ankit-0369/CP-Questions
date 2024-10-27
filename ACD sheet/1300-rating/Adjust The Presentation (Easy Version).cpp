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

bool solve(){
 int n,m,q;
cin>>n>>m>>q;
  vi a(n+1);
 for(int i=0; i<n; i++){
    int x; cin>>x;
    a[i]= x;
 }

vi b;
for(int i=0; i<m; i++){
  int x; cin>>x;
  b.push_back(x);
}


 auto it= unique(b.begin(), b.end());
 b.resize(distance(b.begin(), it));
 int i=0, k=0;
 set<int> st;
 for(int i=0; i<b.size(); i++){
  
    if(b[i] == a[k]){
      st.insert(b[i]); 
      k++;
    }else{
      if(st.find(b[i]) == st.end()) return false;
     

    }
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
    cout<<"YA\n";
  }else{
    cout<<"TIDAK\n";
  }
}

return 0;
}