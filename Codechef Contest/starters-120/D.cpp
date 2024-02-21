/* ------------ ॥ अंतः अस्ति प्रारंभः ॥-------    */
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int getSum(vector<int>& p, int x){
    
}

int main(){
 int t;
 cin>>t;
 while (t--)
 {
    int n;
    cin>>n;
    vector<int> p;
    for(int i=0; i<n; i++){
        int x;
         cin>>x;
         p.push_back(x);
    }

    for(int i=1; i<=n; i++){
        cout<<getSum(p, i)<<"\n";
    }
 }
 
return 0;
}