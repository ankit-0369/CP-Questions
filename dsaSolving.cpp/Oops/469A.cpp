#include<bits/stdc++.h>

using namespace std;

int main(){
 int n;
 cin>>n;
 int a[n+1]= {0};
int i=0;
while(i<2){
    int m;
    cin>>m;
    int x[m];
    for(int j=0; j<m; j++){
        cin>>x[j];
        a[x[j]]=1;
    }
    i++;

}
bool check=true;
for(int i=1; i<n+1; i++){
    if(a[i]==0){
        check= false;
        cout<<"Oh, my keyboard!"<<endl;
        break;
    }
}
if(check)
cout<<"I become the guy."<<endl;
return 0;
}