#include<iostream>

using namespace std;

void tower(int n, char sr, char ar, char dr){
   if(n==1){
      cout<<"move from "<<sr<<" to "<<dr<<endl;
      return;
   }
   //recursive call
   tower(n-1,sr,dr,ar);
   cout<<"move from "<<sr<<" to "<<dr<<endl;
   tower(n-1,ar, sr,dr);
   
}

int main(){
 int n;
 char dr='c', ar= 'b', sr= 'a';
 cin>>n;
 tower(n, sr,ar,dr);
return 0;
}