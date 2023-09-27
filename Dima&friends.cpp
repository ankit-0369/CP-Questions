#include<bits/stdc++.h>

using namespace std;

int main(){
 int n;
cin>>n;
int sum=0;
for(int i=0; i<n; i++){
    int x;
    cin>>x;
    sum+= x;

}
int ct=0;
for(int i=1; i<=5; i++){
   int s2= 0;
   s2= sum+i-1;
   if(s2%(n+1)!=0){
    ct++;
   }
   
}
cout<<ct;
return 0;
}