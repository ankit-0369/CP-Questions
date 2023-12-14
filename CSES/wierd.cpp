/* ------------ ॥ अंतः अस्ति प्रारंभः ॥-------    */
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
       ios_base::sync_with_stdio(false);
        cin.tie(NULL);
 long long n;
 cin>>n;
 
 while(n!=1){
    cout<<n<<" ";
    if(n&1){ 
        n= n*3+1;
    }else{
        n/=2;
    }
 }
 cout<<1;
return 0;
}