#include<bits/stdc++.h>

using namespace std;

int main(){
 while(true){
    int* p= new int;
    delete p;
    cout<<"memory allocated\n";
 }
return 0;
}