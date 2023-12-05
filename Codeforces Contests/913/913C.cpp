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
 int n;
 cin>>n;
 string strin;
 cin>>strin;
 int cnt[26]= {0};
 for(auto c:strin){
    cnt[c-'a']++;

 }

 int maxCnt=0;
 for(int i=0; i<26; i++)
 maxCnt= max(maxCnt,cnt[i]);
int result=0;
 if(maxCnt>n/2){
    result= 2* maxCnt-n;
 }else if(n%2==1){
    result= 1;
 }else{
    result=0;
 }

 return result;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t;
cin>>t;
while(t--){
//   solve();
  cout<<solve()<<"\n";
}

return 0;
}