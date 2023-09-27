#include<bits/stdc++.h>

using namespace std;

int solve(){
    float a1,a2,a3;
    cin>>a1>>a2>>a3;
    float h,l,b;
    l= sqrt((a1/a2)*a3);
    b= sqrt((a2/a1)*a3);
    h= sqrt((a2/a3)*a1);

    return 4*(l+b+h);
}

int main(){
 cout<<solve()<<endl;
return 0;
}