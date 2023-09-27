#include<iostream>

using namespace std;

void reverseIt(int a[], int size){
    for(int i=0; i<=size/2; i++){
        a[i]= a[size-1-i];
    }
}

int main(){
 int n;
 cin>>n; 
 int * arr= new int[n];
 for(int i=0; i<n; i++){
    cin>>arr[i];
 }
 reverseIt(arr,n);
 for(int i=0; i<n; i++){
    cout<<arr[i]<<"\t";
 }
 delete []arr;
return 0;
}