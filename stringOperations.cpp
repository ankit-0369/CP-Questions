#include<iostream>
#include<string>
using namespace std;

int main(){
 string s="ankit is hacker and coder great coder ambititous intelligent honest and trustworthy and rich and healthy and caring person and good citizen  ";
 int i=0;
 while(i!=-1){
     i= s.find("and");
 cout<<i<<"\n";
    if(i!=-1)
    s.erase(i,3);
 }
 for(int i=0; i<s.length(); i++){
    cout<<s[i];
 }

return 0;
}