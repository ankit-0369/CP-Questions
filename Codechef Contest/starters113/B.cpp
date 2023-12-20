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
    int n;
    cin>>n;
    vector<int> arr;
    loop(i,0,n){
        int x;
        cin>>x;
        arr.pb(x);
    }
    if(n==4){
        if((arr[0]+arr[1]) != (arr[2]+arr[3])) return true;
        else return false;
    }
    set<int> st;
    for(int i=0; i<n; i++){
        st.insert(arr[i]);
    }
    if(st.size()==1) return false;
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
  }else{
    cout<<"NO\n";
  }
}

return 0;
}