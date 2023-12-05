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
// #define int int64_t
#define loop(i, j, k) for (int i = j; i < k; i += 1)
#define rloop(i, j, k) for (int i = j; i >= k; i -= 1)
#define PI 3.1415926535897932384626433832795

using namespace std;

void solve(){
    int r,c;
    cin>>r>>c;
    char a[r][c];
    loop(i,0,r){
        for(int j=0; j<c; j++){
            cin>>a[i][j];
        }
    }

    int r1=0, c1=0;
    loop(i,0,r){
        loop(j,0,c){
            // cout<<a[i][j]<<" ";
            if(a[i][j]=='S'){
                
                r1++; break;
            }
        }
    }

    loop(i,0,c){
        loop(j,0,r){
            if(a[j][i]=='S'){c1++; break;}
        }
    }

    cout<< (r*c-r1*c1);


    
return;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t;
// cin>>t;
t=1;
while(t--){
  solve();
}

return 0;
}