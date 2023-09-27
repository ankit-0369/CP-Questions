#include<iostream>
#include<climits>
using namespace std;

void print(int * a, int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return;
}

void SelectionSort(int* a,int n){
    if(n==1)
    return;
    int min= INT_MAX;
    int minIndex=-1;
    for(int i=0; i<n; i++){
        if(a[i]<min){
         min= a[i];
         minIndex= i;
        }
    }
    swap(a[0],a[minIndex]);
    
    SelectionSort(a+1,n-1);
    return;
}

int main(){
int n;
cin>>n;
int* arr= new int[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}
SelectionSort(arr,n);
print(arr,n);
return 0;
}