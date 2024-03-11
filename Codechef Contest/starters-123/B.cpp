/* ------------ ॥ अंतः अस्ति प्रारंभः ॥-------    */
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
  
    int sum=0;
    sort(a.begin(), a.end());
    sum+= a[0] + a[1];
    for(int i=2; i<n; i++){
        sum+= 2*a[i];
    }
    cout<<sum<<"\n";
 }
return 0;
}