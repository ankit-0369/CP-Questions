/* ------------ ॥ अंतः अस्ति प्रारंभः ॥-------    */
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
 int a,b,c;
 cin>>a>>b>>c;
 int ans= max(a+b+c, max(a+(b*c), max((a+b)*c,a*b*c)));
 ans= max(ans, max(a*b+c, a*(b+c)));
 cout<<ans;
return 0;
}