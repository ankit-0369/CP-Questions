#include<bits/stdc++.h>

using namespace std;

// string removex(string s){

//     int n= s.size();
//     if(n==1){
//         if(s[0]== 'x'){
//             s.clear();
//             return "";
//         }else
          
//             return s;
//     }
//     string news="";
//     if(s[0]=='x'){
//         auto it= s.begin();
//         s.erase(it);
//         news+= removex(s);
//     }else{
//         news= s[0];
//         auto it= s.begin();
//         s.erase(it);
//         news+= removex(s);
//     }

//     return news;
// }

void removex(char s[]){
    if(s[0]=='\0'){
        return;
    }
    if(s[0]=='x'){
        int i=1;
        for(; s[i]!='\0'; i++){
            s[i-1]= s[i];
        }
        s[i-1]= s[i];
        removex(s);
    }else{

        removex(s+1);
    }
}

int main(){
char s[100];
cin>>s;
removex(s);
cout<<s;

return 0;
}