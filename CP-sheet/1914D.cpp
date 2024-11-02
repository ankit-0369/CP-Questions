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


void getMx(int a[], int x[], int n){
    int mx1= -1, mx2= -1, mx3= -1;
    for(int i=0; i<n; i++){

        if(mx1 == -1 || a[i]>a[mx1]){
            mx3= mx2;
            mx2= mx1;
            mx1= i;
        }else if(mx2 == -1 || a[i] > a[mx2]){
            mx3= mx2;
            mx2= i;
        }else if(mx3 == -1 || a[i] > a[mx3]){
            mx3= i;
        }
    }

    x[0]= mx1, x[1]= mx2, x[2]= mx3;
    return;

}

void solve(){
 int n; cin>>n;
 int a[n], b[n], c[n];
 for(auto &x:a) cin>>x;
 for(auto &x:b) cin>>x;
 for(auto &x:c) cin>>x;

 int x[3], y[3], z[3];
    getMx(a,x,n);
    getMx(b,y,n);
    getMx(c, z, n);

    

int ans= -1;

for(auto &i:x){
    for(auto &j : y){
        for(auto &k:z){
            if(i!= j && i!= k && j!= k){

                ans= max(ans, (a[i]+b[j]+c[k]) );
            }
        }
    }
}

cout<<ans<<"\n";
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