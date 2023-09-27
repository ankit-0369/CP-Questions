#include<iostream>
#include<string>

using namespace std;

bool isPalindrome(string s){
    int n= s.size();
    
    if(n==0 || n==1){
        return true;
    }
    if(s[0]!=s[n-1]){
        return false;
    }
    s.pop_back();
    auto it= s.begin();
    s.erase(it);
    bool issmallpalindrome= isPalindrome(s);
    return issmallpalindrome;
}

int main(){
 string s;
 cin>>s;
cout<<isPalindrome(s);
return 0;
}