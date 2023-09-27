#include<iostream>

using namespace std;

int main(){
 long long int n,k;
 cin>>n>>k;
 if(n%2==0){
    if(k<=n/2){
        //odd
        cout<<(2*k-1);
    }else{
        //even
        cout<<(2*(k-(n/2)));
    }
 }else{
    if(k<=(n+1)/2){
        //odd
        cout<<(2*k-1);
    }else{
        //even
        cout<<(2*(k-(n+1)/2));
    }
 }
return 0;
}