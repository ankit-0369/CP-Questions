// #include <iostream>

// int main() {
//     int t;
//     std::cin >> t;

//     for (int i = 0; i < t; ++i) {
//         int n, p, L, t;
//         std::cin >> n >> p >> L >> t;

//         int s = 0;
//         int e = n;

//         while (e - s > 1) {
//             int mid = (e + s) / 2;
//             int cur = mid * L;
//             int cnt = std::min(mid * 2, (n + 6) / 7) * t;
//             cur += cnt;

//             if (cur < p) {
//                 s = mid;
//             } else {
//                 e = mid;
//             }
//         }

//         std::cout << n - e << std::endl;
//     }

//     return 0;
// }



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

lli solve(){
 lli n,p,l,t;
 cin>>n>>p>>l>>t;
 lli s=0, e=n;
 while(e-s>1){
    lli m= s+ (e-s)/2;
    lli cur= m*l;
    lli cnt= min(m*2, (n+6)/7)*t;
    cur+= cnt;
    if(cur<p){
        s= m;
    }else{
        e= m;
    }

 }
return n-e;
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