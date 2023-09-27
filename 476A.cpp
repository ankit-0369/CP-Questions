/* ------------ ॥ अंतः अस्ति प्रारंभः ॥-------    */
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
 int n,m;
 cin>>n>>m;
//  int a= ceil(n/2)= n+2-1/2;
int a= (n+1)/2;
//  int ans= ceil(a/m)*m;
int ans= (a+m-1)/m*m;
// cout<<a<<" "<<(a+m-1)/m<<" ";
if(ans>n){
    cout<<-1;
    return 0;
}
cout<<ans;
 


return 0;
}