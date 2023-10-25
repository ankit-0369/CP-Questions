/* ------------ ॥ अंतः अस्ति प्रारंभः ॥-------    */
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
 int n;
 cin>>n;
 int k=1;
 for(int i=1; i<=n; i++){
   for(int i=1; i<=n/2; i++){
        cout<<k<<" "<<(n*n-k+1)<<" ";
        k++;
   }
   cout<<"\n";
    
 }
return 0;
}