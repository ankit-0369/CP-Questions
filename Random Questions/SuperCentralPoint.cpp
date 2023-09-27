#include<bits/stdc++.h>

using namespace std;

int main(){
 int n;
 cin>>n;
int cor[n][2];
int ct=0;
for(int i=0; i<n;i++){
    cin>>cor[i][0]>>cor[i][1];
}
for(int i=0; i<n; i++){
    int l=0, r=0, u=0, d=0;
    for(int j=0; j<n; j++){
        if(cor[i][0]== cor[j][0]){
            if(cor[i][1]>cor[j][1]){
                d++;
            }else if(cor[i][1]<cor[j][1])
            u++;
        }
        if(cor[i][1]==cor[j][1]){
            if(cor[i][0]>cor[j][0]){
                r++;
            }else if(cor[i][0]<cor[j][0])
            l++;
        }
    }

    if(l>0 && r>0 && u>0 && d>0){
        ct++;
    }
}

cout<<ct<<endl;
 
return 0;
}