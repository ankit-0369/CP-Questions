/* ------------ ॥ अंतः अस्ति प्रारंभः ॥-------    */
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve(){
 int n, k; cin>>n>>k;

vector<string> mat(n);
for(int i=0; i<n; i++){
   string s; cin>>s;
   mat[i]= s;
   
}

for(int i=0; i<n; i+= k){
    for(int j=0; j<n; j+= k){
        cout<<mat[i][j]<<"";
        // cout<<i<<j<<" ";
    }

    cout<<endl;
}

return;
}

int main(){
 int t;
  cin>>t;
  while(t--)
  {
    solve();
  }
return 0;
}