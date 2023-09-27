#include<bits/stdc++.h>

using namespace std;

int antCollisions(string &s) {
    // Write Your Code Here
   int ct=0;
   for(int i=0; i<s.size(); i++){
       if(s[i]=='L' || s[i]=='D'){
           int j=i-1;
           while(j>=0 && (s[j]!='D'|| s[j]!='L') ){
               if(s[j]=='R'){
                   ct++;
                    s[j]='D';
                    
               }
                 j--;
           }
       }
   }
   for(int i=s.size()-1; i>=0; i--){
       if(s[i]=='R' || s[i]=='D'){
           int j=i+1;
           while(j<s.size() && (s[j]!='D'|| s[j]!='L')){
               if(s[j]=='L'){
                   ct++;
                   s[j]='D';
                   
               }
               j++;
           }
       }
   }

   return ct;
}


int main(){
 string s;
 cin>>s;
 cout<<antCollisions(s);
return 0;
}