#include<bits/stdc++.h>

using namespace std;

int minofarray(long long int a[], int n){
    long long int min= INT_MAX;
    
    int index=0;
    for(int i=0; i<n; i++){
        // cout<<a[i]<<"\t";
        if(a[i]<min){
            index= i;
            min= a[i];
        }
    }
    // cout<<"fn return\t"<<index<<"\n";
    return index;
}

int main(){
 int t;
 cin>>t;
 while(t--){
    int n,m;
    cin>>n>>m;
    long long int a[n], b[m];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<m; i++){
        cin>>b[i];
    }

    for(int j=0; j<m; j++){
        int min= minofarray(a,n);
        // cout<<min<<"\t";
            a[min]= b[j];
                 
    }

        long long int sum=0;
     for(int i=0; i<n; i++){
        // cout<<a[i]<<"\t";
    sum+= a[i];
 }
 cout<<sum<<"\n";

 }


return 0;
}