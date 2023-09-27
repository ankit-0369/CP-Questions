#include<bits/stdc++.h>

using namespace std;
bool isSorted(int a[], int size){
    if(size==0||size==1){
        return true;

    }
    if(a[0]<a[1]){
        return true;
    }
    bool issmallsorted= isSorted(a+1, size-1);
    return issmallsorted;
}
int main(){
 int n;
 cin>>n; 
 int *arr= new int[n];
 for(int i=0; i<n; i++){
    cin>>arr[i];
 }
 cout<<isSorted(arr,n)<<endl;
delete [] arr;
return 0;
}