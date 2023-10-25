/* ------------ ॥ अंतः अस्ति प्रारंभः ॥-------    */
#include<bits/stdc++.h>
#define ll long long int

using namespace std;
int solve(int n){
    if(n<=10) return 0;
    if(n>10 && n<20) return 4;
    if(n==20) return 15;
    if(n==21) return 4;
    return 0;
}
int main(){
 int n;
 cin>>n;
 cout<<solve(n);
return 0;
}