#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> Merge(vector<ll> a, vector<ll> b){
    int i=0, j=0;
    vector<ll> c;
    int k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
            c.push_back(a[i++]);
        }else if(a[i]>b[j]){
            c.push_back(b[j++]);
        }else{
            c.push_back(a[i++]);
            c.push_back(b[j++]);
        }
    }
    while(i<a.size()){
        c.push_back(a[i++]);
    }
    while(j<b.size())
      c.push_back(b[j++]);

    return c;
}

int main(){
 int t;
 cin>>t;
 while(t--){
    ll n;
    cin>>n;

   vector<ll> a,b;

    for(int i=0; i<n; i++){
       int x;cin>>x;
       a.push_back(x);
    }
    for(int i=0; i<n; i++){
         int x;cin>>x;
       b.push_back(x);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
   vector<ll> c= Merge(a,b);
//    for(int i=0; i<c.size(); i++){
//     cout<<c[i]<<"\t";
//    }

    ll ans=INT_MAX;
    int i=0;
    while((i+n-1)<c.size()){
      int cur= c[i+n-1]- c[i];
      if(cur<ans){
        ans= cur;
      }
       i++;
    }
   
   cout<<ans<<"\n";
 }

return 0;
}