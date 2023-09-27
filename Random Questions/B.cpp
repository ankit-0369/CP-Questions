/* ------------ ॥ अंतः अस्ति प्रारंभः ॥-------    */
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n;
    int b[n];
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
     vector<int> a;
    a.push_back(b[0]);
    int m=1;
   
    for(int i=1; i<n; i++){
        if(b[i-1]<=b[i]){
            a.push_back(b[i]);
        }else{
           a.push_back(b[i]);
           a.push_back(b[i]);
        }
    }

    cout<<a.size()<<"\n";
    for(auto nu:a){
        cout<<nu<<" ";
    }
    cout<<endl;
   
 }
return 0;
}