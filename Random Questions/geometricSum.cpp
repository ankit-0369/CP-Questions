#include<bits/stdc++.h>

using namespace std;

float geoSum(int n){

    float smallsum;
    if(n==0){
        return 1;
    }else
    smallsum=  geoSum(n-1);
      smallsum+= 1/pow(2,n);
    return smallsum;
}

int main(){
 int n;
 cin>>n;
 cout<<geoSum(n);
return 0;
}