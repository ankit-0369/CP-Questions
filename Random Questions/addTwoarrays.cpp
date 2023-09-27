#include<bits/stdc++.h>

using namespace std;

int main(){
 int n;
 cin>>n;

 int a[n];
for(int i=0; i<n; i++){

    cin>>a[i];
}
int x=0;
int r=0;
while(n--){
    cout<<a[n]<<"\t"<<pow(10,x)<< "\n";

    r= r+ (a[n]* pow(10,x));
    cout<<r<<"\n";
    x++;
//   cout<<r<<"\n";
}
cout<<r;
return 0;
}