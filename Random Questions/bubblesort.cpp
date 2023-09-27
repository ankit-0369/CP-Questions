#include<iostream>

using namespace std;


void printarray(int a[], int n){

    for(int i=0; i<n; i++){
        cout<<a[i]<<"\t";
    }
}

void bubbleSort(int a[], int n){

    for(int i=1; i<=n-1; i++){

            for(int j=0; j<n-i; j++){
                if(a[j]>a[j+1]){

                    swap(a[j], a[j+1]);
                }
            }
    }
}

int main(){
 int n;
 cin>>n;
 int * a= new int[n];
 for(int i=0; i<n; i++){

    cin>>a[i];
 }
bubbleSort(a,n);
printarray(a,n);

delete [] a;
return 0;
}