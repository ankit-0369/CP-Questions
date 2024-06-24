/* ------------ ॥ अंतः अस्ति प्रारंभः ॥-------    */
#include<bits/stdc++.h>
#define ll long long int

using namespace std;
int M= 1e9+7;
int solve(int n, vector<int>& memo){
    if(n<0) return 0;
    if(n == 0) return 1;
    if(memo[n]!= -1) return memo[n];
    int temp= 0;
    for(int i=1; i<=6; i++){
        temp= (temp%M + solve(n-i, memo)%M)%M;
    }
    return memo[n]= temp%M;
}

int main(){
 int n; cin>>n;
 vector<int> memo(n+1, -1);
 cout<<solve(n, memo)<<"\n";
return 0;
}