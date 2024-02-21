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
 int n,m;
 cin>>n>>m;
 int a[n];
 vector<int> arr;
 for(int i=0; i<n; i++){
    cin>>a[i];
 }
 int i=0;
 int cnt=0;
 while(i<n){
    int sum=0;
    while(sum<m && i<n){
        sum+= a[i];
        i++;
    }
    arr.push_back(sum);
    
 }
    if(arr[0]<m){
        return 0;
    }
 for(int i= arr.size()-1; i-1>=0; i--){
    if(arr[i]<m){
        arr[i-1]+= arr[i];
        arr.pop_back();
    }
 }
 
return arr.size();
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