#include<bits/stdc++.h>
#define ll long long
using namespace std;

void printno(ll n){
    if(n==1){
        cout<<1<<endl;
        return;
    }
    printno(n-1);
    cout<<n<<"\t";
}
int main(){
 ll n;
 cin>>n;
 printno(n);
return 0;
}