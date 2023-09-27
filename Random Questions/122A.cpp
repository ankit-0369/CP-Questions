#include<bits/stdc++.h>

using namespace std;

bool checkLucky(int n){
  bool istrue= true;
    while(n!=0){
        int d= n%10;
        if(d==4 || d==7){
            n= n/10;
        }else{
            istrue= false;
            break;
        }
    }

    return istrue;
}

int main(){
 int n;
 cin>>n;
 bool check= false;
 for(int i=1; i<=n; i++){

    if(checkLucky(i)){
        if(n%i==0){
            check= true;
            break;
        }
    }
 }

 if(check){
    cout<<"YES\n";
 }else
   cout<<"NO\n";
return 0;
}