#include<bits/stdc++.h>

using namespace std;

int main(){
 int m,n;
 cin>>m;
 int** twodarr= new int*[m];
  for(int i=0; i<m; i++){
    cin>>n;
    twodarr= new int*[n];
    //to input array
    for(int j=0; j<n; j++){
        cin>>twodarr[i][j];
    }
  }
    for(int i=0; i<m; i++){

        for(int j=0; j<n; j++){
            cout<<twodarr[i][j]<<"\t";
        }
        cout<<"\n";
    }