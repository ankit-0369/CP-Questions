#include<iostream>

using namespace std;

int main(){
 int n;
 cin>>n;
 
 for(int i=2; i<=n; i++){
        bool check=true;
    for(int j=2; j*j<=i; j++){

        if(i%j==0){
            check=false;
        }
    }

    if(check){
        cout<<i<<"\t";
    }
 }
return 0;
}