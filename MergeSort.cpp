#include<iostream>

using namespace std;

void Merge(int *arr, int s, int e){
    int m= s+(e-s)/2;
 
    int l1= m-s+1;
    int l2= e-m;
    int a1[l1], a2[l2];
    int i=0;
    int k=s;
    while(i<l1){
        a1[i++]= arr[k++];

    }
    i=0;
    while(i<l2){
        a2[i++]= arr[k++];
    }
    i=0, k=s;
    int j=0;
    while(i<l1 || j<l2){
        if(a1[i]<a2[j]){
            arr[k++]= a1[i++];
        }else
        arr[k++]= a2[j++];
    }
    while(i<l2){
        arr[k++]= a1[i++];
    }
    while(j<l2){
        arr[k++]= a2[j++];
    }
    
}

void MergeSort(int *arr, int n, int s, int e){
    if(s>=e)
    return;
    int m= s+(e-s)/2;
    MergeSort(arr,n,s,m);
    MergeSort(arr,n,m+1,e);
    Merge(arr,s,e);
}

int main(){
 int n;
 cin>>n;
 int *a= new int[n];
 for(int i=0; i<n; i++){
    cin>>a[i];
 }
 MergeSort(a,n,0,n-1);
  for(int i=0; i<n; i++){
    cout<<a[i]<<" ";
 }
return 0;
}
