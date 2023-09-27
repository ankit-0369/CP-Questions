#include<bits/stdc++.h>

using namespace std;

int main(){
 int n,m;
 cin>>n>>m;
 vector<pair<int,int>> v;
 for(int i=0; i<n; i++){
    int x;
    cin>>x;
    v.push_back({x,i+1});
 }
//  cout<<"working";
//  cout<<v.size()<<endl;
 while(v.size()>1){
    int i=0;
    if(v[i].first<=m){
      //  v[i].first= 0;
        auto it= v.begin();
        v.erase(it);
    }else{
        v.push_back({v[i].first-m, v[i].second});
        auto it= v.begin();
        v.erase(it);
    }
 }
 //cout<<v.size()<<endl;
 cout<<v[0].second;
return 0;
}