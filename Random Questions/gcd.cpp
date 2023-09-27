#include<iostream>

using namespace std;
int gcd(int a, int b){
    if(a%b==0)
    return b;
    if(b%a==0)
    return a;
    while(a%b!=0){
        int temp= a>b? b: a;
            a= max(a,b)%temp;
            b= temp;
    }
    return b;
}

int main(){
 int a,b;
 cin>>a>>b;
 cout<<"gcd of given nos: "<<gcd(a,b);
return 0;
}