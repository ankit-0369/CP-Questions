/* ------------ ॥ अंतः अस्ति प्रारंभः ॥-------    */
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
 int n;
 cin>>n;
 int xr=0;
 for(int i=1; i<=n ; i++){
   xr^=i;
 }
 for(int i=0; i<n-1; i++){
      int x; cin>>x;
      xr^=x;
 }
 
 cout<<xr;

return 0;
}