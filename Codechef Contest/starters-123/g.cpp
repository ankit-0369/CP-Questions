#include <bits/stdc++.h>
using namespace std;
void solve(){
    int number,x,y;
        cin>>number>>x>>y;
        if(x==y){
            if(number>x){
                if((number-(x+1))%(x+1)==0){
                    cout<<"Bob"<<endl;
                }
                else{
                    cout<<"Alice"<<endl;
                }
            }
            else{
                cout<<"Alice"<<endl;
            }
        }
        else if(x<y){
            if(number<=x){
                cout<<"Alice"<<endl;
            }
            else{
                cout<<"Bob"<<endl;
            }
        }
        else{
            cout<<"Alice"<<endl;
        }
        
}
int main() {
    int test;
    cin>>test;
    while (test--) {
        solve();
    }
    return 0;
}
