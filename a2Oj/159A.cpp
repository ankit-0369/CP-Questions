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

// // void solve(){
// //  int n;
// //  cin>>n;
// //  string s;
// //  cin>>s;
// //  int cnt0=0, cnt1=0;
// //  for(auto ch:s){
// //     if(ch=='0'){
// //         cout<<"Yes\n";
// //         cnt0=1;
// //         break;
// //     }
// //  }

// //  if(cnt0==0){
// //     cout<<"No\n";
// //  }

// // return;
// // }

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
 lli ans=0;
 lli n, l,t,p;
 
 cin>>n;
 cin>>p;
 cin>>l>>t;


 int w= (n%7==0)? (n/7) : (n/7+1);
 lli cur=0;
 int least=0;
 if(w==1){
    w--;
    cur+= t+l;
    least++;
 }

 if(w&1 && w>1){
    w-=2;
    cur+= 2*t+l;
    least++;
 }
 while(w!=0 && cur<p){
    cur+= 2*t+l;
    least++;
    if(cur>=p){
        return (n-least);
    }
    w-=2;
 }


 while(cur<p){
    cur+= l;
    least++;
 }


return n-least;
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




