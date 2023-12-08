/* ------------ ॥ अंतः अस्ति प्रारंभः ॥-------    */
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
 string p;
 cin>>p;
 int i=0;
 bool check= false;
 while(i<p.size()){
    if(p[i]=='H' || p[i]=='Q' ||p[i]=='9'){
        cout<<"YES\n";
        check= true;
        break;
    }
   i++;
 }
  if(!check){
        cout<<"NO\n";
    }
return 0;
}