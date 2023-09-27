#include<bits/stdc++.h>

using namespace std;

int allOcc(int a[], int n, int k){

    int s=0, e=n-1;
    int m= s+ (e-s)/2;
    int ct=0;
    while(s<=e){
        if(a[m]==k){
            ct++;
            e= e-1;
        }else if(k> a[m]){
            s= m+1;
        }else
           e= m-1;
           m= s+(e-s)/2;
    }
}

int main(){
 int n;cin>>n;

 int a[n];
 for(int i=0; i<n; i++){
    cin>>a[i];
 }
 int k;
 cin>>k;
 allOcc(a,n,k);
return 0;
}