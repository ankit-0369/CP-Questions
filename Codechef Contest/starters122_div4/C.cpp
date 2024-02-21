/* ------------ ॥ अंतः अस्ति प्रारंभः ॥-------    */
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
 int t;
 cin>>t;
 while(t--){
    int ind= 0;
    int p=0;
    for(int i=1; i<=22; i++){

            int x,y;
            cin>>x>>y;

            if(x+ 20*y >= p){
                p= x+20*y;
                ind= i;
            }
            
    }

    cout<<ind<<"\n";
 }
return 0;
}