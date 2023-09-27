/* ------------ ॥ अंतः अस्ति प्रारंभः ॥-------    */
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
 int n, s;
 cin>>s>>n;
 int bon[n], dr[n];
 for(int i=0; i<n; i++){
    cin>>dr[i]>>bon[i];

 }

 for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        if(s>dr[j] && dr[j]!= -1){
            dr[j]= -1;
            s+= bon[j];
            break;
        }
    }
 }

 for(int i=0; i<n; i++){
    if(dr[i]!= -1){
        cout<<"NO\n";
        return 0;
    }
 }
 cout<<"YES\n";

return 0;
}