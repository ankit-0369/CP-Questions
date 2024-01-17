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
 int h,x,y1,y2,k;
 cin>>h>>x>>y1>>y2>>k;
int ans=0;
int a1= (h%x==0) ? h/x : h/x+1;
int b1= (h%y1==0) ? h/y1 : h/y1+1;
// int b1= h/y1;
if(b1>k){
    b1= k;
    h-= k*y1;
    b1+= (h%y2==0) ? h/y2 : h/y2+1;
}

return min(a1, b1);
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