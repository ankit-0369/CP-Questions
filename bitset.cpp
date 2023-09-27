#include<bits/stdc++.h>

using namespace std;

int main(){
 int n;
 cin>>n;
 bitset<20> bin= n;
 bitset<20> rev;
 cout<<bin<<endl;
 for(int i=0; i<20; i++){
   rev[20-i]= bin[i];
 }
 cout<<rev;
return 0;
}