/* ------------ ॥ अंतः अस्ति प्रारंभः ॥-------    */
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
 int t;
 cin>>t;
 while(t--){
    int n,m;
    cin>>n>>m;
    char a[n][m];
    

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
        int s[4]= {0};
    for(int j=0; j<m; j++){
        for(int i=0; i<n; i++){
            if(s[0]!= 1 && a[i][j]== 'v'){
                s[0]++;
                break;
            }
            if(s[0]==1 && s[1]!= 1 && a[i][j]=='i'){
                s[1]++;
                break;
            }
            if(s[0]==1 && s[1]==1 && s[2]!=1 && a[i][j]=='k'){
                s[2]++;
                break;
            }
            if(s[0]==1 && s[1]==1 && s[2]==1 && s[3]!= 1 && a[i][j]=='a'){
                s[3]++;
                break;
            }
        }
    }

    if(s[0] && s[1] && s[2] && s[3]){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }

 }
return 0;
}