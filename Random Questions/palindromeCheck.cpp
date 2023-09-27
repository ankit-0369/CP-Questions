#include <bits/stdc++.h> 

using namespace std;
bool checkPalindrome(string s)
{
    // Write your code here.
    transform(s.begin(), s.end(),s.begin(),::tolower);
// //     int i=0,j= s.size()-1;
//     string rev= s;
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
//   cout<<rev<<"\t"<<new1;

   return (rev==new1);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s1, s2;
        cin>>s1;
        cout<<(checkPalindrome(s1));
        
    }
    return 0;
}