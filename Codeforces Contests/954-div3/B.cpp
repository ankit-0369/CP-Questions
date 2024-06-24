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

void solve(){
 int n,m; cin>>n>>m;
 int a[n][m];
 for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cin>>a[i][j];
    }
 }
    int delr[4]= {0, 0, -1, 1};
    int delc[4]= {-1, 1, 0, 0};
 for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        int flag= 0, maxi= 0;
        for(int k=0; k<4; k++){
            int r= delr[k] + i;
            int c= delc[k] + j;
           if(r>=0 && r<n && c>=0 && c<m){

                if(a[i][j] <= a[r][c]){
                flag= 1;
                break;
            }else{
                maxi= max(maxi, a[r][c]);
            }
           }
            
        }

        if(!flag){
            a[i][j]= maxi;
        }
    }
 }

 for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
       cout<<a[i][j]<<" ";
    }
    cout<<endl;
 }
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