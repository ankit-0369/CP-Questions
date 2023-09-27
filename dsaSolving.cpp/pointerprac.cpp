#include<bits/stdc++.h>

using namespace std;

void square(int* p){
    int a=10;
    p= &a;
    cout<<p<<endl;
    *p= *p * *p;
    cout<<*p<<endl;
}

int main(){
 int a=10;
 cout<<&a<<endl;
 square(&a);
 cout<<a<<endl;
return 0;
}