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
 int n;
 cin>>n;
 int a[n], b[n];
 for(int i=0; i<n; i++){
    cin>>a[i];
 }
 for(int i=0; i<n; i++){
    cin>>b[i];
 }
 int m1= 0, m2= 0;
//  int dr[3]= {-1,0,1};
//  int r1= 0, r2= 0;
 for(int i=0; i<n; i++){
    
    int x= a[i], y= b[i];
    if(x == -1 && y == -1){
        if(m1>=m2){
            m1--;
        }else m2--;
    }else if((x == -1 && y == 1)
         || (x==0 && y==1) || (x==1 && y ==-1) || (x == 1 && y== 0)
          || (x == 1 && y ==1)){
        if(m1>=m2){
            m2++;
        }else m1++;
    }
 }

 cout<<min(m1, m2)<<"\n";

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