#include <bits/stdc++.h> 
using namespace std;

void toLowercase(string &s){
    int i=0;
   
    while(s[i]!='\0'){
        if(s[i]>='A' && s[i]<='Z')
           s[i]= s[i]+ 32;
      
        i++;
    }
}

bool checkPalindrome(string s)
{
    // Write your code here.
    cout<<"working in fn...\n";
    transform(s.begin(), s.end(),s.begin(),::tolower);
// //     int i=0,j= s.size()-1;
//     string rev= s;
    //    cout.putline(s);
    reverse(s.begin(), s.end());
    int i=0,j=0;
    string new1;
   while(s[i]!='\0'){
      if((s[i]<=9|| s[i]>=97 &&s[i]<=122)){
          new1[j++]= s[i];
      }
       i++;
   } 
    string rev= new1 ;
    reverse(rev.begin(), rev.end());
  cout<<rev<<"\t"<<new1;

   return 0;
}

int main(){
    string s;
    cin>>s;
    toLowercase(s);
    cout<<s;

    return 0;
}