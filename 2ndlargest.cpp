#include<bits/stdc++.h>

using namespace std;

int main(){
 int n;
 cin>>n;
 int a[n];
 for(int i=0; i<n; i++){
    cin>>a[i];

 }
 int l1=-1, l2= -1;
 for(int i=0; i<n; i++){
    if(a[i]>l1)
        l1= a[i];
        else if(a[i]<l1 && a[i]>l2)
        l2= a[i];
 }
 cout<<l1<<"\t"<<l2;
return 0;
}