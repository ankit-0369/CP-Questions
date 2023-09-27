#include<bits/stdc++.h>

using namespace std;

void reverseWords(vector<char> &s){

    int i=0;
    int j= s.size()-1;
    while(i<j){
        swap(s[i++], s[j--]);
    }
     for(int i=0; i<s.size(); i++){
    cout<<s[i];
 }
 cout<<endl;
}

int main(){
 vector<char> s;
 int n;
 cin>>n;

 for(int i=0; i<n; i++){
    char x;
   //  getchar(x);
    s.push_back(x);
   
 }
//  s.push_back('\0');
 reverseWords(s);
 for(int i=0; i<n; i++){
    cout<<s[i];
 }
return 0;
}