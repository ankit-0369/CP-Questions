/* ------------ ॥ अंतः अस्ति प्रारंभः ॥-------    */
#include<bits/stdc++.h>
#define ll long long int

using namespace std;


vector<int> solve(int p){
    return {};
}

int main(){
 int t;
 cin>>t;
 int x= 1;
 while(t--){
     int p;
    vector<int> ans= solve(p);
    if(ans.size()==0){
        cout<<"case #"<<x++<<": -1"<<endl;
    }else{
        cout<<"case #"<<x++<<": "<<ans.size();
        for(auto n:ans){
            cout<<n<<" ";
        }
        cout<<endl;
    }

 }
return 0;
}