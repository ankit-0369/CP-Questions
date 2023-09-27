#include<iostream>

using namespace std;

void Reverse(char *s, int n){
    if(n==1)
    return;
    swap(s[0],s[n-1]);
    Reverse(s+1, n-2);
    return;
}

int main(){
    int n;
    cin>>n;

 char s[n];
 cin>>s;
 Reverse(s,n);
 cout<<s;
return 0;
}