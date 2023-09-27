#include<bits/stdc++.h>

using namespace std;
int xpowern(int x, int n){
    if(n==1){
        return x;
    }
    int res= x* xpowern(x,n-1);
    return res;
}

int main(){
 int x,n;
 cin>>x>>n;
 cout<<xpowern(x,n);
return 0;
}