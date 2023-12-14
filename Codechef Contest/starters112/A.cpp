
// /* ------------ ॥ अंतः अस्ति प्रारंभः ॥-------    */
// #include<bits/stdc++.h>
// #define ll long long int

// using namespace std;

// int main(){
//  int t;
//  cin>>t;
//  while(t--){
//     int n,k;
//     cin>>n>>k;
//     int p=( n/(k+1))*k;
//     cout<<(n-p)<<"\n";
//  }
// return 0;
// }



/* ------------ ॥ अंतः अस्ति प्रारंभः ॥-------    */
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
 int t;
 cin>>t;
 while(t--)
 {
    int n;
    cin>>n;
    int a[n], b[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }

    map<int, int> m;
    for(int i=0; i<n; i++){
        if(m.find(a[i])!= m.end()){
            m[a[i]]= max(m[a[i]], b[i]);
        }else{
            m.insert({a[i], b[i]});
        }
    }
    int ans=0;
    for(auto p:m){
        if(p.second>0){
            ans+= p.second;
        }
    }

    cout<<ans<<"\n";
 }
return 0;
}