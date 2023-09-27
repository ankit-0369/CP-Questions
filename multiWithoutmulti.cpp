#include<iostream>

using namespace std;

int multi(int m, int n){
    int sum=m;
    if(n==0){
        return 0;
    }
    if(n==1){
        return sum;
    }
    
    sum+= multi(m,n-1);
    return sum;
}

int main(){
 int m,n;
 cin>>m>>n;
cout<< multi(m,n);
return 0;
}