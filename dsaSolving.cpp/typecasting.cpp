#include<bits/stdc++.h>

using namespace std;

int main(){
 int i=99;
 char c= i;//implicit typecasting. 
 int* p= &i;
 char* pc= (char*)p;//explicit typecasting
 cout<<pc<<endl;
 cout<<p<<endl;
 cout<<*(pc+1)<<endl;
 cout<<*(pc)<<endl;

 char s[]= "askfsjfefjg";
 char* ps= &s[0];
 int d= (int)s[6];
 int* d_p= (int*) ps;
 cout<<*d_p<<endl;
 cout<<d_p<<endl;
 cout<<d<<endl; 
 cout<<*ps<<endl;
 cout<<ps<<endl;

 //reference variable
 int& pd= i;//pd is refence variable which is a vsriable which uses sae memory location of i.
 


return 0;
}