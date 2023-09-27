#include<iostream>

using namespace std;

int main(){
 string s;
 cin>>s;
 int i=0;
 while(s[i]!='\0'){
    if(s.find("WUB")!=-1){
       int j=s.find("WUB"); 
        s[j]=' ';
         s.erase(j+1,2);
          }else
    i++;
 
 }
 cout<<s;
return 0;
}