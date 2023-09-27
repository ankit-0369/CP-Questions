#include<bits/stdc++.h>

using namespace std;

int convert(string s){
    int n= s.size();
    int num=0;
    if(n<1){
        return -1;
    }
    if(n==1){
        num= s[0]-'0';
        
        return num;
    }
        num= s[n-1]-'0';
        s.pop_back();
        num= num+ 10*convert(s);
    
    return num;
}

int main(){
 string s;
 cin>>s;
 cout<<convert(s);
return 0;
}
