#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;



int main(){
 int n,m;
 cin>>n>>m;
 int f[m];
 for(int i=0; i<m; i++){
    cin>>f[i];
 }
 sort(f,f+m);
 int res= INT_MAX;
for(int i=0; i+n-1<m; i++){
   res= min(res, f[i+n-1]- f[i]);
}
cout<<res<<endl;
return 0;
}