#include<bits/stdc++.h>

using namespace std;

int main(){
 int n,m,a,b;
 cin>>n>>m>>a>>b;
 int sum=0;
 sum+= (n/m)* b;
sum+= (n- (n/m)*m)*a;

sum= min(sum,n*a);
int x= ceil(float(n)/float(m))*b;
sum= min(sum,x);
cout<<sum<<endl;
return 0;
}