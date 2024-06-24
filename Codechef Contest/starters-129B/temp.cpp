/* ------------ ॥ अंतः अस्ति प्रारंभः ॥-------    */
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

bool  checkCons(char ch){
    if(ch == 'a' || ch ==' e' || ch == 'i' || ch == 'o' || ch ==' u') return true;

    return false;
}

int main(){
 string s;
 cin>>s;
 int cnt=0;
 for(int i=0; i<s.size(); i++){
    if(i%2 == 0 && checkCons(s[i]))  cnt++;
 }
 cout<<cnt<<"\n";
return 0;
}