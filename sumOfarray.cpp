#include<bits/stdc++.h>

using namespace std;
int sumOfarray(int a[], int size){
    int sum= a[0];
    if(size==1){
        return a[0];
    }
    
    return a[0]+ sumOfarray(a+1,size-1);
}
int main(){
 int n;
 cin>>n;
 int a[n];
 for(int i=0; i<n; i++){
    cin>>a[i];
 }
 cout<<sumOfarray(a,n)<<endl;
return 0;
}