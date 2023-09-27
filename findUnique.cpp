#include<iostream>
using namespace std;


int findUnique(int *arr, int size)
{
    //Write your code here
   int hash[1007];
    for(int i=0; i<1007; i++){
        hash[i]= 0;
    }
    for(int i=0; i<size; i++){
        hash[arr[i]]++;ub
    }
    int val= 5;
    for(int i=0; i<1007; i++){
            if(hash[i]==1){
                val= i;
            }
    }
    return val;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<findUnique(a,n);
}