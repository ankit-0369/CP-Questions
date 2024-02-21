/* ------------ ॥ अंतः अस्ति प्रारंभः ॥-------    */
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
 int t;
 cin>>t;
 while (t--)
 {
    int x,y;
    cin>>x>>y;
    if((y-x+2)<=0){
        cout<<0<<"\n";
    }else
    cout<<(y-x+2)<<"\n";


 }
 
return 0;
}