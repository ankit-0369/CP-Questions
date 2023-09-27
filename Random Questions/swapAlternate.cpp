#include<bits/stdc++.h>

using namespace std;

void swapAlt(int a[], int n){
   
     for(int i=0; i<n-1; i= i+2){
        swap(a[i], a[i+1]);
    }
   
}

int main(){
 int n;
 cin>>n;
 int a[n];
 for(int i=0; i<n; i++){
    cin>>a[i];
 }
 swapAlt(a,n);
for(int i=0; i<n; i++){
    cout<<a[i]<<"\t";
}
return 0;
}