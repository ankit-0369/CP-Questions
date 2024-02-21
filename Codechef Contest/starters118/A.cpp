/* ------------ ॥ अंतः अस्ति प्रारंभः ॥-------    */
#include<bits/stdc++.h>
#define ll long long int

using namespace std;



int main(){
 int t;
 cin>>t;

 while(t--){
    int p,l;
    cin>>p>>l;
    float a= (float)l* ((float)100/p);
    // cout<<a;
    if(a>=75){
        cout<<"yes\n";
    }else{
        cout<<"no\n";
    }
 }
return 0;
}