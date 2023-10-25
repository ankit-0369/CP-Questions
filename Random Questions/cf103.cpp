#include <bits/stdc++.h>
using namespace std;

int main()
{
// your code goes here
 long long t;
 cin>>t;
 while (t--)
 {
 long long n;
 cin >> n;
 vector<long long> v(n);
 vector<pair<long long, long long>> vp;
 for (long long i = 0; i < n; i++)
 {
 cin >> v[i];
 vp.push_back({v[i], i});
}
 sort(vp.rbegin(), vp.rend());
 long long maxi = v[0];
for (long long i = 0; i < vp[0].second; i++)
 {
 maxi = max(maxi, v[i]);
 v[i] = maxi;
 }
 maxi = v[n - 1];
 for (long long i = n - 1; i > vp[0].second; i--)
 {
 maxi = max(maxi, v[i]);
 v[i] = maxi;
 }
 long long sum = 0;

 // cout<<endl;
 for(int i=0; i<n; i++){
     sum += v[i];
 }

 cout<<sum<<"\n";
 }
return 0;
}