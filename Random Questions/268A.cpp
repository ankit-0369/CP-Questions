#include<iostream>
#include<utility>
#include<vector>
using namespace std;

int main(){
 int n;
 cin>>n;
 vector<pair<int,int>> v_p;
 for(int i=0; i<n; i++){
    int x,y;
    cin>>x>>y;
    v_p.push_back({x,y});
 }
 int ct=0;
 //counting same values
 for(int i=0; i<n; i++){

    for(int j=0; j<n; j++){
        if(j!=i){
            if(v_p[i].first==v_p[j].second)
            ct++;
        }
    }
 }
 cout<<ct;
return 0;
}