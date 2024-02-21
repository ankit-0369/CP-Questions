/* ------------ ॥ अंतः अस्ति प्रारंभः ॥-------    */
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
 int x;
    cin>>x;
    if(x<8){
        cout<<"LESS\n";
    }else if(x == 8){
        cout<<"PERFECT\n";
    }else{
        cout<<"MORE\n";
    }
return 0;
}