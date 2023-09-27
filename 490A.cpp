/* ------------ ॥ अंतः अस्ति प्रारंभः ॥-------    */
#include<bits/stdc++.h>
// #define ll long long int

using namespace std;

int main(){
 int n;
 cin>>n;
//  cout<<"wotk";
 int h[3]= {0,0,0};
 int t[n];
 
 for(int i=0; i<n; i++){
        cin>>t[i];
        h[t[i]-1]++;
 }
 int lr= min(h[0], min(h[1],h[2]));

 cout<<lr<<"\n";

 for(int i=0; i<lr; i++){
    int ct[3]= {0,0,0};
    for(int j=0; j<n; j++){

        if(t[j]!= -1 && ct[t[j]-1] ==0){
            cout<<j<<" ";
            ct[t[j]-1]++;
            t[j]= -1;
        }
        
    }
    cout<<"\n";
 }
return 0;
}