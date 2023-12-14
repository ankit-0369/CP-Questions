// #include<bits/stdc++.h>
// using namespace std;
// int n,l,m,i,a[1005];
// main(){
// 	cin>>n>>l;
// 	for(;i<n;i++) cin>>a[i];
// 	sort(a,a+n);
// 	m=max(a[0],l-a[n-1])*2;
// 	for(i=1;i<n;i++) m=max(m,a[i]-a[i-1]);
// 	printf("%lf",m/2.0);
// }


/* ------------ ॥ अंतः अस्ति प्रारंभः ॥-------    */
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
 int n,l,m;
 cin>>n>>l;
 int a[n];
 for(int i=0; i<n; i++)
 {
    cin>>a[i];
 }
 sort(a,a+n);
m= max(a[0], l-a[n-1])*2;
for(int i=1; i+1<n; i++) m= max(m, a[i+1]-a[i]);
printf("%lf", m/2.0);

return 0;
}