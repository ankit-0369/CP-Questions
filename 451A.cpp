#include<iostream>

using namespace std;

int main(){
 int n,m;
 cin>>n>>m;
int d= n<m? n : m;
if(d%2==0)
cout<<"Malvika";
else
cout<<"Akshat";
return 0;
}