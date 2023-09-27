#include<bits/stdc++.h>

using namespace std;

char removedup(char s[]){
    if(s[0]=='\0'){
        return '\0';
    }
    char small= removedup(s+1);
    if(s[0]==small){
        int i=1;
        for(; s[i]!='\0'; i++){
            s[i-1]= s[i];
        }
        s[i-1]= s[i];

    }else
       removedup(s+1);
       return s[0];
    
}

int main(){
 char s[1000];
 cin>>s;
 removedup(s);
 cout<<s;
return 0;
}