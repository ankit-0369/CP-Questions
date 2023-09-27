#include<bits/stdc++.h>

using namespace std;

int main(){
 int n,k;
 cin>>n>>k;
int a[n];
for(int i=0; i<n; i++){

	cin>>a[i];
}
int i=0, sum=0;
int temp=0;
while(sum+a[i]<=k){
	sum+= a[i];
	if(i==n-1){
		i=0;
	}else
        i++;	
}
cout<<(i+1);
return 0;
}