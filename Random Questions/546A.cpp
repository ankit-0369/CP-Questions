/* ------------ ॥ अंतः अस्ति प्रारंभः ॥-------    */
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
 int k,n,w;
 cin>>k>>n>>w;
cout<<max(0,(k*w*(w+1)/2)-n);
return 0;
}