// #include<bits/stdc++.h>
// #define pb push_back
// #define pp pop_back
// #define pii pair<int,int>
// #define vi vector<int>
// #define vc vector<char>
// #define vb vector<bool>
// #define mii map<int,int>
// #define mib map<int, bool>
// #define mic map<int,char>
// typedef long long ll;
// typedef long long int lli;
// #define loop(i, j, k) for (int i = j; i < k; i += 1)
// #define rloop(i, j, k) for (int i = j; i >= k; i -= 1)
// #define PI 3.1415926535897932384626433832795

// using namespace std;

// void solve(){
//  int n;
// int x;
// cin>>n>>x;
//           vector<int> v;
//           int temp=1000000;
//           if(x<=temp){
//             for(int i=0;i<n;i++){
//             int nums=(i+1)*x;
//             v.push_back(nums);
//             }
              
//           }
//           else{
//               for(int i=1;i<n+1;i++){
//                   v.push_back(i);
//               }
//           }
//           for(int i=0;i<n;i++){
//               cout<<v[i]<<" ";
//           }
//           cout<<endl;
// return;
// }

// int main(){
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// cout.tie(NULL);

// int t;
// cin>>t;
// while(t--){
//   solve();
// }

// return 0;
// }


/* ------------ ॥ अंतः अस्ति प्रारंभः ॥-------    */
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
 int t;
 cin>>t;
 while(t--){
   string s ;
    cin>>s;
    bool check= false;
    for(int i = 0;i<s.size()-1;i++){
        if(s[i] =='i' && s[i+1]=='t'){
            cout<<"YES"<<endl;
            check= true;
            break;
        }
    }
    if(!check) cout<<"NO"<<endl;
 }
return 0;
}