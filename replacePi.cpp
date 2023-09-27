#include<iostream>
#include<string>

using namespace std;

string replacePi(string s){
    int n= s.size();
    if(n<=1){
        return s;
    } 
        string x="3.14";
        string news;
    if(s[0]=='p'&&s[1]=='i'){
    auto it= s.begin();
    s.erase(it, it+2);
        news= x+ replacePi(s);
    }else{
        news= s[0];
        auto it= s.begin();
        s.erase(it);
       news+=    replacePi(s);
        
        }
    return news;
}

int main(){
 string s;
 cin>>s;
 cout<<replacePi(s);
return 0;
}