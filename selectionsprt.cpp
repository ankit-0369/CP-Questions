#include<iostream>
#include<climits>
using namespace std;

void printarray(int a[], int n){

    for(int i=0; i<n; i++){
        cout<<a[i]<<"\t";
    }
}

void selectionSort(int a[], int n){

    for(int i=0; i<n-1; i++){

        int min= INT_MIN;
        int minindex=0;
        for(int j=i; j<n; j++){

            if(a[j]>min){
                min= a[j];
                minindex= j;
            }
        }
        swap(a[i],a[minindex]);
    }
}

int main(){
 int n;
 cin>>n;
 int * a= new int[n];
 for(int i=0; i<n; i++){
    cin>>a[i];
 }
 selectionSort(a,n);
 printarray(a,n);
delete [] a;
return 0;
}