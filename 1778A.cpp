#include<bits/stdc++.h>

using namespace std;

int main(){
 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n;
    int a[n];
    int sum=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        sum+= a[i];
    }
    bool done=  false;
    bool done2= false;
    for(int i=0; i<n-1; i++){
        if(a[i]==-1 && a[i+1]==-1){
            cout<<sum+4<<"\n";
            done=true;
            break;
        }
    }
    
     for(int i=0; i<n-1 && done==false; i++){
        if(a[i]==1 && a[i+1]==-1 || a[i]==-1 && a[i+1]==1){
           cout<<sum<<"\n";
            done= true;
            break;
        }
    }
    
    if(done==false){
        cout<<sum-4<<"\n";
    }
   
 }
return 0;
}