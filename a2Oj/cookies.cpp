/* ------------ ॥ अंतः अस्ति प्रारंभः ॥-------    */
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
 int n;
 cin>>n;
 int sum=0, cnt=0;
 for(int i=0; i<n; i++){
    int x;
    cin>>x;
    sum+= x;
    if(x&1) cnt++;
 }

 if(sum&1)
 cout<<cnt;
 else
 cout<<(n-cnt);
return 0;
}