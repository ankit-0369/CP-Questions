/* ------------ ॥ अंतः अस्ति प्रारंभः ॥-------    */
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
 int n,m;
 cin>>n>>m;
 int left=0;
 for(int i=0; i<n; i++){
    if(i%2==0){
        for(int j=0; j<m; j++){
            cout<<"#";
        }
        cout<<"\n";
    }else{
        if(left==1){
            cout<<"#";  
        }else{
            cout<<".";
        }
        for(int j=0; j<m-2; j++){
            cout<<".";
        }
        if(left==0)
        cout<<"#";
        else
        cout<<".";
        left= !left;

        cout<<"\n";
        

    }
 }
return 0;
}