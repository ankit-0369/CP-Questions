#include<iostream>

using namespace std;

int power(int a, int b){
    if(b==0)
    return 1;
    int res= power(a,b/2);
    if(b%2==0){
        res*= res;
    }else
    res*= res*a;

    return res;
}

int main(){
 int a,b;
 cin>>a>>b;
cout<< power(a,b);
return 0;
}