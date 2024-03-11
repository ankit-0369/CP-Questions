/* ------------ ॥ अंतः अस्ति प्रारंभः ॥-------    */
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        a.push_back(x);
    }
    int ans=0;
    sort(a.rbegin(), a.rend());
    for(int i=0; i<n ;i++){
        ans= max(ans, ((i+1)*a[i]));
    }

    cout<<ans<<"\n";
 }
return 0;
}