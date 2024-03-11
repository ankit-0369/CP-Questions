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
    int a[n];
    int ans=0;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        ans+= ceil(double(x)/2.0);
    }

    cout<<ans<<"\n";


 }
return 0;
}